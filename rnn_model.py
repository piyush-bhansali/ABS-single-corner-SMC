import torch
import torch.nn as nn

class RNNObserver(nn.module):
  def __init__(self, input_dim, hidden_dim):
    super().__init__()
    self.rnn = nn.RNN(input_dim, hidden_dim, num_layers = 1, nonlinearity = 'tanh', bias = True)
    self.fc = nn.Linear(hidden_dim, 1, bias = True)

  def forward(self, x, h_prev):
    out, h_new = self.rnn(x, h_prev)
    d_hat = self.fc(out.view(1, -1))
    return d_hat, h_new

initialized = False
net          = None
hidden       = None
prev_phi     = None

in_dim  = 1      
hid_dim = 5      
n1, n2, n3, n4, n5 = 0.5, 0.5, 0.1, 0.1, 0.1

def rnn_step(phi_np, s_k, dt):

  global initialized, net, hidden, prev_phi
  if not initialized:
    net = RNNObserver(in_dim, hid_dim).double()
    hidden = torch.zeros(1, -1, hid_dim, dtype = torch.float64)
    prev_phi = torch.zeros(in_dim, dtype = torch.float64)
    initialized = True

x_torch = torch.from_numpy(phi_np).view(1,in_dim).unsqueeze(0).unsqueeze(0)
d_hat_torch, h_new = net.forward(x_torch, hidden)
hidden = h_new
d_hat = float(d_hat_torch.item())

phi_t = torch.from_numpy(phi.np).double()
phi_prev = prev_phi.clone()

dW = -n1 * s_k * phi_t
dV = -n2 * s_k * phi_prev
dC = n3 * s_k * phi_t
dT = n5 * s_k * phi_t

with torch.no_grad()
  dW = dW.unsqueeze(0).repeat(hid_dim, 1)
  net.rnn.weight_ih_l0 += dt * dW_full

  dV_full = dV.unsqueeze(0).repeat(hid_dim, 1) 
  net.rnn.weight_hh_l0 += dt * dV_full

  net.fc.bias += dt * dC[0]

  dT_full = dT.unsqueeze(0).repeat(1, hid_dim)
  net.fc.weight += dt * dT_full

prev_phi = phi_t.clone()

return d_hat

