/* Include files */

#include "ABS_contDyn_model_sfun.h"
#include "c4_ABS_contDyn_model.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 125,/* lineNo */
  13,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 12, /* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 13,/* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 20,/* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 23,/* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 60,/* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 63,/* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 64,/* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 65,/* lineNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fcnName */
  "#ABS_contDyn_model:426"             /* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 135,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 133,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 132,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 71,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 282,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 284,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 286,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 287,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 117,/* lineNo */
  "randn",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\randn.m"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 40,/* lineNo */
  "eml_randn",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_randn.m"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 39,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 56,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 405,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 414,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 416,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtDCInfo c4_emlrtDCI = { 61, /* lineNo */
  15,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_emlrtBCI = { 1,  /* iFirst */
  5,                                   /* iLast */
  61,                                  /* lineNo */
  15,                                  /* colNo */
  "theta_hat",                         /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 67,/* lineNo */
  7,                                   /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  67,                                  /* lineNo */
  7,                                   /* colNo */
  "A",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 67,/* lineNo */
  10,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  67,                                  /* lineNo */
  10,                                  /* colNo */
  "A",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 67,/* lineNo */
  29,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  67,                                  /* lineNo */
  29,                                  /* colNo */
  "A",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 68,/* lineNo */
  7,                                   /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  68,                                  /* lineNo */
  7,                                   /* colNo */
  "B",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_f_emlrtDCI = { 68,/* lineNo */
  10,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  68,                                  /* lineNo */
  10,                                  /* colNo */
  "B",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_g_emlrtDCI = { 68,/* lineNo */
  29,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  68,                                  /* lineNo */
  29,                                  /* colNo */
  "B",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  59,                                  /* lineNo */
  37,                                  /* colNo */
  "theta_previous",                    /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_h_emlrtDCI = { 59,/* lineNo */
  37,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  59,                                  /* lineNo */
  46,                                  /* colNo */
  "r_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_i_emlrtDCI = { 59,/* lineNo */
  46,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  60,                                  /* lineNo */
  23,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_j_emlrtDCI = { 60,/* lineNo */
  23,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  60,                                  /* lineNo */
  64,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_k_emlrtDCI = { 60,/* lineNo */
  64,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  63,                                  /* lineNo */
  24,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_l_emlrtDCI = { 63,/* lineNo */
  24,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_m_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  63,                                  /* lineNo */
  64,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_m_emlrtDCI = { 63,/* lineNo */
  64,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_n_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  64,                                  /* lineNo */
  59,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_n_emlrtDCI = { 64,/* lineNo */
  59,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_o_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  64,                                  /* lineNo */
  23,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_o_emlrtDCI = { 64,/* lineNo */
  23,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_p_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  65,                                  /* lineNo */
  23,                                  /* colNo */
  "w_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_p_emlrtDCI = { 65,/* lineNo */
  23,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_q_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  65,                                  /* lineNo */
  63,                                  /* colNo */
  "v_hat",                             /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_q_emlrtDCI = { 65,/* lineNo */
  63,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_r_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  65,                                  /* lineNo */
  84,                                  /* colNo */
  "theta_previous",                    /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_r_emlrtDCI = { 65,/* lineNo */
  84,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_s_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  67,                                  /* lineNo */
  5,                                   /* colNo */
  "theta_hat",                         /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_s_emlrtDCI = { 67,/* lineNo */
  5,                                   /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_t_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  68,                                  /* lineNo */
  5,                                   /* colNo */
  "theta_hat",                         /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_t_emlrtDCI = { 68,/* lineNo */
  5,                                   /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_u_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  69,                                  /* lineNo */
  56,                                  /* colNo */
  "theta_hat",                         /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_u_emlrtDCI = { 69,/* lineNo */
  56,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_v_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  69,                                  /* lineNo */
  7,                                   /* colNo */
  "C",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_v_emlrtDCI = { 69,/* lineNo */
  7,                                   /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_w_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  69,                                  /* lineNo */
  10,                                  /* colNo */
  "C",                                 /* aName */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_w_emlrtDCI = { 69,/* lineNo */
  10,                                  /* colNo */
  "ABS/Antilock Braking System/MATLAB Function1",/* fName */
  "#ABS_contDyn_model:426",            /* pName */
  1                                    /* checkKind */
};

static uint32_T c4_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
  1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
  2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
  951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
  1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
  1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
  3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
  1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
  761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
  3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
  699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
  1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
  4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
  3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
  4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
  170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
  1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
  1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
  1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
  3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
  501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
  1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
  2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
  2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
  4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
  2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
  2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
  3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
  733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
  1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
  627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
  3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
  3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
  3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
  354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
  1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
  1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
  3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
  2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
  2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
  548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
  1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
  3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
  2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
  191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
  3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
  396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
  3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
  2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
  3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
  1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
  1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
  976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
  2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
  766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
  3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
  1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
  607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
  3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
  1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
  2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
  4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
  551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
  3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
  1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
  552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
  181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
  3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
  4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
  478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
  3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
  786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
  2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
  4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
  4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
  3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
  3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
  370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
  3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
  1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
  2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
  2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
  4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
  1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
  506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
  138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
  3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
  1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
  2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
  643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
  1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
  4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
  4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
  1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
  3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
  3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
  3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
  190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
  2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
  453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
  4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
  2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
  363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
  1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
  2844269403U, 79981964U, 624U };

/* Function Declarations */
static void initialize_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance);
static void initialize_params_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void mdl_start_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct *
  chartInstance);
static void mdl_terminate_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void enable_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance);
static void disable_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance);
static void sf_gateway_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance);
static void ext_mode_exec_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void set_sim_state_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance, const mxArray *c4_st);
static real_T c4_now(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance);
static void c4_randn(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance, const
                     emlrtStack *c4_sp, real_T c4_r[5]);
static void c4_genrand_uint32_vector(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, uint32_T c4_mt[625], uint32_T c4_b_mt[625], uint32_T c4_u[2]);
static void c4_genrandu(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, uint32_T c4_mt[625], uint32_T c4_b_mt[625], real_T
  *c4_r);
static void c4_rand(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, real_T c4_r[5]);
static real_T c4_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, real_T c4_y[5]);
static void c4_d_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, real_T c4_y[5]);
static boolean_T c4_e_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr);
static boolean_T c4_f_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr);
static uint32_T c4_g_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr);
static uint32_T c4_h_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr);
static void c4_i_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, uint32_T c4_y[625]);
static void c4_j_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, uint32_T c4_y[625]);
static void c4_k_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, uint32_T c4_y[2]);
static void c4_l_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, uint32_T c4_y[2]);
static void c4_m_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, real_T c4_y[5]);
static void c4_n_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, real_T c4_y[5]);
static void c4_b_genrand_uint32_vector(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, uint32_T c4_mt[625], uint32_T c4_u[2]);
static real_T c4_b_genrandu(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, uint32_T c4_mt[625]);
static void init_dsm_address_info(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_initialised_not_empty = false;
  chartInstance->c4_alpha_hat_not_empty = false;
  chartInstance->c4_v_hat_not_empty = false;
  chartInstance->c4_w_hat_not_empty = false;
  chartInstance->c4_r_hat_not_empty = false;
  chartInstance->c4_theta_hat_not_empty = false;
  chartInstance->c4_seed_not_empty = false;
  chartInstance->c4_method_not_empty = false;
  chartInstance->c4_state_not_empty = false;
  chartInstance->c4_b_state_not_empty = false;
  chartInstance->c4_c_state_not_empty = false;
  chartInstance->c4_b_method_not_empty = false;
  chartInstance->c4_d_state_not_empty = false;
  chartInstance->c4_doneDoubleBufferReInit = false;
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  c4_struct_xB3tjHnkhHxGuMTMMl07LH c4_r;
  const mxArray *c4_m = NULL;
  const mxArray *c4_mxField;
  real_T c4_d;
  const char_T *c4_fieldNamesVar[5] = { "eta1", "eta2", "eta3", "eta4", "eta5" };

  c4_m = sf_mex_get_sfun_param(chartInstance->S, 1U, 1U);
  sf_mex_check_bus_parameter(c4_m, 0, NULL, 5, &c4_fieldNamesVar[0], "rnn",
    "struct_xB3tjHnkhHxGuMTMMl07LH");
  c4_mxField = sf_mex_getfield(c4_m, "eta1", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c4_mxField), &c4_r.eta1, 1, 0, 0U, 0, 0U,
                      0);
  c4_mxField = sf_mex_getfield(c4_m, "eta2", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c4_mxField), &c4_r.eta2, 1, 0, 0U, 0, 0U,
                      0);
  c4_mxField = sf_mex_getfield(c4_m, "eta3", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c4_mxField), &c4_r.eta3, 1, 0, 0U, 0, 0U,
                      0);
  c4_mxField = sf_mex_getfield(c4_m, "eta4", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c4_mxField), &c4_r.eta4, 1, 0, 0U, 0, 0U,
                      0);
  c4_mxField = sf_mex_getfield(c4_m, "eta5", "rnn", 0);
  sf_mex_import_named("rnn", sf_mex_dup(c4_mxField), &c4_r.eta5, 1, 0, 0U, 0, 0U,
                      0);
  sf_mex_destroy(&c4_m);
  sf_mex_clear_bus_parameter_worklist();
  chartInstance->c4_rnn = c4_r;
  sf_mex_import_named("dt", sf_mex_get_sfun_param(chartInstance->S, 0U, 0U),
                      &c4_d, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c4_dt = c4_d;
}

static void mdl_start_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct *
  chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c4_JITStateAnimation[0],
                        &chartInstance->c4_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    48U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  1U, 0U, 1U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "c4_ABS_contDyn_model", 0, -1, 2655);
  covrtEmlSaturationInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 377, -1,
    391);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 224, 247, -1,
                    1017, false);
  covrtEmlForInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 1640, 1661,
                     2238);
}

static void mdl_cleanup_runtime_resources_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_ABS_contDyn_model(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance)
{
  time_t c4_b_eTime;
  time_t c4_eTime;
  emlrtStack c4_b_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c4_A[25];
  real_T c4_B[25];
  real_T c4_C[25];
  real_T c4_f_y[25];
  real_T c4_dv[5];
  real_T c4_dv1[5];
  real_T c4_dv2[5];
  real_T c4_r_hat_dot[5];
  real_T c4_theta_previous[5];
  real_T c4_v_hat_dot[5];
  real_T c4_w_hat_dot[5];
  real_T c4_a;
  real_T c4_ab_a;
  real_T c4_b;
  real_T c4_b_a;
  real_T c4_b_b;
  real_T c4_b_d_hat;
  real_T c4_b_dt;
  real_T c4_b_dv;
  real_T c4_b_k;
  real_T c4_b_lambda_e;
  real_T c4_b_mti;
  real_T c4_b_s;
  real_T c4_b_x;
  real_T c4_b_y;
  real_T c4_c_a;
  real_T c4_c_b;
  real_T c4_c_s;
  real_T c4_c_x;
  real_T c4_c_y;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d5;
  real_T c4_d6;
  real_T c4_d7;
  real_T c4_d_a;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_dr;
  real_T c4_dw;
  real_T c4_e_a;
  real_T c4_e_b;
  real_T c4_e_x;
  real_T c4_e_y;
  real_T c4_eta1;
  real_T c4_eta2;
  real_T c4_eta3;
  real_T c4_eta4;
  real_T c4_f_a;
  real_T c4_f_x;
  real_T c4_g_a;
  real_T c4_g_x;
  real_T c4_g_y;
  real_T c4_h_a;
  real_T c4_h_x;
  real_T c4_h_y;
  real_T c4_i_a;
  real_T c4_i_x;
  real_T c4_i_y;
  real_T c4_j_a;
  real_T c4_j_x;
  real_T c4_j_y;
  real_T c4_k_a;
  real_T c4_k_x;
  real_T c4_k_y;
  real_T c4_l_a;
  real_T c4_l_x;
  real_T c4_m_a;
  real_T c4_m_x;
  real_T c4_m_y;
  real_T c4_n_a;
  real_T c4_n_y;
  real_T c4_net_k;
  real_T c4_o_a;
  real_T c4_o_y;
  real_T c4_p_a;
  real_T c4_q_a;
  real_T c4_r_a;
  real_T c4_recurrent_term;
  real_T c4_s0;
  real_T c4_s_a;
  real_T c4_t_a;
  real_T c4_u_a;
  real_T c4_v_a;
  real_T c4_w_a;
  real_T c4_x;
  real_T c4_x_a;
  real_T c4_y;
  real_T c4_y_a;
  int32_T c4_iv[2];
  int32_T c4_iv1[2];
  int32_T c4_b_loop_ub;
  int32_T c4_c_k;
  int32_T c4_d_b;
  int32_T c4_d_k;
  int32_T c4_e_k;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_k;
  int32_T c4_l_y;
  int32_T c4_loop_ub;
  int32_T c4_mti;
  int32_T c4_prevEpochTime;
  int32_T c4_t;
  uint32_T c4_arg3;
  uint32_T c4_b_seed;
  uint32_T c4_r;
  uint32_T c4_u;
  uint32_T c4_u1;
  uint32_T c4_varargin_1;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b6;
  boolean_T c4_b7;
  boolean_T c4_b_rEQ0;
  boolean_T c4_covSaturation = false;
  boolean_T c4_f_b;
  boolean_T c4_rEQ0;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, *chartInstance->c4_s);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U,
                    *chartInstance->c4_lambda_e);
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_b_lambda_e = *chartInstance->c4_lambda_e;
  c4_b_s = *chartInstance->c4_s;
  c4_b_dt = chartInstance->c4_dt;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 4U, 0, 0,
                     !chartInstance->c4_initialised_not_empty)) {
    c4_b_st.site = &c4_emlrtRSI;
    if (!chartInstance->c4_seed_not_empty) {
      chartInstance->c4_seed = 0U;
      chartInstance->c4_seed_not_empty = true;
    }

    if (!chartInstance->c4_method_not_empty) {
      chartInstance->c4_method = 7U;
      chartInstance->c4_method_not_empty = true;
    }

    c4_b_x = c4_now(chartInstance) * 8.64E+6;
    c4_c_x = c4_b_x;
    c4_y = c4_c_x;
    c4_y = muDoubleScalarFloor(c4_y);
    c4_d_x = c4_y;
    c4_a = c4_d_x;
    c4_e_x = c4_a;
    c4_f_x = c4_e_x;
    if (c4_f_x == 0.0) {
      c4_c_s = 0.0;
    } else {
      c4_c_s = muDoubleScalarRem(c4_f_x, 2.147483647E+9);
      c4_rEQ0 = (c4_c_s == 0.0);
      if (c4_rEQ0) {
        c4_c_s = 0.0;
      } else if (c4_c_s < 0.0) {
        c4_c_s += 2.147483647E+9;
      }
    }

    c4_eTime = time(NULL);
    c4_prevEpochTime = (int32_T)c4_eTime + 1;
    do {
      c4_exitg1 = 0;
      c4_b_eTime = time(NULL);
      c4_t = (int32_T)c4_b_eTime;
      if (c4_t <= c4_prevEpochTime) {
        c4_g_x = c4_now(chartInstance) * 8.64E+6;
        c4_h_x = c4_g_x;
        c4_d_y = c4_h_x;
        c4_d_y = muDoubleScalarFloor(c4_d_y);
        c4_i_x = c4_d_y;
        c4_d_a = c4_i_x;
        c4_j_x = c4_d_a;
        c4_k_x = c4_j_x;
        if (c4_k_x == 0.0) {
          c4_s0 = 0.0;
        } else {
          c4_s0 = muDoubleScalarRem(c4_k_x, 2.147483647E+9);
          c4_b_rEQ0 = (c4_s0 == 0.0);
          if (c4_b_rEQ0) {
            c4_s0 = 0.0;
          } else if (c4_s0 < 0.0) {
            c4_s0 += 2.147483647E+9;
          }
        }

        if (c4_c_s != c4_s0) {
          c4_exitg1 = 1;
        }
      } else {
        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);

    c4_d2 = muDoubleScalarRound(c4_c_s);
    c4_covSaturation = false;
    if (c4_d2 < 4.294967296E+9) {
      if (c4_d2 >= 0.0) {
        c4_u = (uint32_T)c4_d2;
      } else {
        c4_covSaturation = true;
        c4_u = 0U;
      }
    } else if (c4_d2 >= 4.294967296E+9) {
      c4_covSaturation = true;
      c4_u = MAX_uint32_T;
    } else {
      c4_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c4_covrtInstance, 4, 0, 0, 0,
      c4_covSaturation);
    chartInstance->c4_seed = c4_u;
    if (!chartInstance->c4_method_not_empty) {
      chartInstance->c4_method = 7U;
      chartInstance->c4_method_not_empty = true;
    }

    c4_varargin_1 = chartInstance->c4_seed;
    if (!chartInstance->c4_state_not_empty) {
      for (c4_i19 = 0; c4_i19 < 625; c4_i19++) {
        chartInstance->c4_state[c4_i19] = c4_uv[c4_i19];
      }

      chartInstance->c4_state_not_empty = true;
    }

    c4_arg3 = c4_varargin_1;
    c4_b_seed = c4_arg3;
    c4_r = c4_b_seed;
    chartInstance->c4_state[0] = c4_b_seed;
    for (c4_mti = 0; c4_mti < 623; c4_mti++) {
      c4_b_mti = (real_T)c4_mti + 2.0;
      c4_d3 = muDoubleScalarRound(c4_b_mti - 1.0);
      if (c4_d3 < 4.294967296E+9) {
        if (c4_d3 >= 0.0) {
          c4_u1 = (uint32_T)c4_d3;
        } else {
          c4_u1 = 0U;
        }
      } else if (c4_d3 >= 4.294967296E+9) {
        c4_u1 = MAX_uint32_T;
      } else {
        c4_u1 = 0U;
      }

      c4_r = (c4_r ^ c4_r >> 30U) * 1812433253U + c4_u1;
      chartInstance->c4_state[(int32_T)c4_b_mti - 1] = c4_r;
    }

    chartInstance->c4_state[624] = 624U;
    c4_b_st.site = &c4_b_emlrtRSI;
    c4_randn(chartInstance, &c4_b_st, c4_dv);
    for (c4_i31 = 0; c4_i31 < 5; c4_i31++) {
      chartInstance->c4_alpha_hat[c4_i31] = c4_dv[c4_i31];
    }

    for (c4_i32 = 0; c4_i32 < 5; c4_i32++) {
      chartInstance->c4_alpha_hat[c4_i32] *= 0.01;
    }

    chartInstance->c4_alpha_hat_not_empty = true;
    chartInstance->c4_v_hat[4] = 1.0;
    chartInstance->c4_v_hat[0] = -1.0;
    for (c4_c_k = 0; c4_c_k < 3; c4_c_k++) {
      c4_d_b = c4_c_k + 2;
      c4_l_y = (c4_d_b << 1) - 6;
      chartInstance->c4_v_hat[c4_c_k + 1] = (real_T)c4_l_y * 0.25;
    }

    chartInstance->c4_v_hat[2] = 0.0;
    chartInstance->c4_v_hat_not_empty = true;
    c4_b_st.site = &c4_c_emlrtRSI;
    c4_rand(chartInstance, &c4_b_st, c4_dv1);
    for (c4_i40 = 0; c4_i40 < 5; c4_i40++) {
      chartInstance->c4_w_hat[c4_i40] = c4_dv1[c4_i40];
    }

    for (c4_i42 = 0; c4_i42 < 5; c4_i42++) {
      chartInstance->c4_w_hat[c4_i42] *= 0.1;
    }

    for (c4_i43 = 0; c4_i43 < 5; c4_i43++) {
      chartInstance->c4_w_hat[c4_i43]++;
    }

    chartInstance->c4_w_hat_not_empty = true;
    c4_b_st.site = &c4_d_emlrtRSI;
    c4_randn(chartInstance, &c4_b_st, c4_dv2);
    for (c4_i45 = 0; c4_i45 < 5; c4_i45++) {
      chartInstance->c4_r_hat[c4_i45] = c4_dv2[c4_i45];
    }

    for (c4_i46 = 0; c4_i46 < 5; c4_i46++) {
      chartInstance->c4_r_hat[c4_i46] *= 0.01;
    }

    chartInstance->c4_r_hat_not_empty = true;
    memset(&chartInstance->c4_theta_hat[0], 0, 5U * sizeof(real_T));
    chartInstance->c4_theta_hat_not_empty = true;
    chartInstance->c4_initialised = true;
    chartInstance->c4_initialised_not_empty = true;
  }

  c4_eta1 = chartInstance->c4_rnn.eta1;
  c4_eta2 = chartInstance->c4_rnn.eta2;
  c4_eta3 = chartInstance->c4_rnn.eta3;
  c4_eta4 = chartInstance->c4_rnn.eta4;
  c4_x = c4_b_lambda_e;
  for (c4_i = 0; c4_i < 5; c4_i++) {
    c4_theta_previous[c4_i] = chartInstance->c4_theta_hat[c4_i];
  }

  memset(&c4_A[0], 0, 25U * sizeof(real_T));
  memset(&c4_B[0], 0, 25U * sizeof(real_T));
  memset(&c4_C[0], 0, 25U * sizeof(real_T));
  for (c4_k = 0; c4_k < 5; c4_k++) {
    c4_b_k = 1.0 + (real_T)c4_k;
    covrtEmlForEval(chartInstance->c4_covrtInstance, 4U, 0, 0, 1);
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_h_emlrtDCI, &c4_st);
    }

    c4_i2 = (int32_T)c4_b_k;
    if ((c4_i2 < 1) || (c4_i2 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i2, 1, 5, &c4_h_emlrtBCI, &c4_st);
    }

    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_i_emlrtDCI, &c4_st);
    }

    c4_i4 = (int32_T)c4_b_k;
    if ((c4_i4 < 1) || (c4_i4 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i4, 1, 5, &c4_i_emlrtBCI, &c4_st);
    }

    c4_recurrent_term = c4_theta_previous[c4_i2 - 1] * chartInstance->
      c4_r_hat[c4_i4 - 1];
    c4_b_st.site = &c4_e_emlrtRSI;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_j_emlrtDCI, &c4_b_st);
    }

    c4_i10 = (int32_T)c4_b_k;
    if ((c4_i10 < 1) || (c4_i10 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i10, 1, 5, &c4_j_emlrtBCI, &c4_b_st);
    }

    c4_f_a = chartInstance->c4_w_hat[c4_i10 - 1];
    c4_g_a = c4_f_a;
    c4_h_a = c4_g_a;
    c4_i_a = c4_h_a;
    c4_h_y = c4_i_a * c4_i_a;
    c4_b_st.site = &c4_e_emlrtRSI;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_k_emlrtDCI, &c4_b_st);
    }

    c4_i21 = (int32_T)c4_b_k;
    if ((c4_i21 < 1) || (c4_i21 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i21, 1, 5, &c4_k_emlrtBCI, &c4_b_st);
    }

    c4_k_a = (c4_x + c4_recurrent_term) - chartInstance->c4_v_hat[c4_i21 - 1];
    c4_l_a = c4_k_a;
    c4_m_a = c4_l_a;
    c4_n_a = c4_m_a;
    c4_k_y = c4_n_a * c4_n_a;
    c4_net_k = c4_h_y * c4_k_y;
    c4_l_x = -c4_net_k;
    c4_m_x = c4_l_x;
    c4_m_x = muDoubleScalarExp(c4_m_x);
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_emlrtDCI, &c4_st);
    }

    c4_i35 = (int32_T)c4_b_k;
    if ((c4_i35 < 1) || (c4_i35 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i35, 1, 5, &c4_emlrtBCI, &c4_st);
    }

    chartInstance->c4_theta_hat[c4_i35 - 1] = c4_m_x;
    c4_b_st.site = &c4_f_emlrtRSI;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_l_emlrtDCI, &c4_b_st);
    }

    c4_i38 = (int32_T)c4_b_k;
    if ((c4_i38 < 1) || (c4_i38 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i38, 1, 5, &c4_l_emlrtBCI, &c4_b_st);
    }

    c4_o_a = chartInstance->c4_w_hat[c4_i38 - 1];
    c4_p_a = c4_o_a;
    c4_q_a = c4_p_a;
    c4_r_a = c4_q_a;
    c4_m_y = c4_r_a * c4_r_a;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_m_emlrtDCI, &c4_st);
    }

    c4_i44 = (int32_T)c4_b_k;
    if ((c4_i44 < 1) || (c4_i44 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i44, 1, 5, &c4_m_emlrtBCI, &c4_st);
    }

    c4_b_dv = -2.0 * c4_m_y * ((c4_x + c4_recurrent_term) -
      chartInstance->c4_v_hat[c4_i44 - 1]);
    c4_b_st.site = &c4_g_emlrtRSI;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_n_emlrtDCI, &c4_b_st);
    }

    c4_i47 = (int32_T)c4_b_k;
    if ((c4_i47 < 1) || (c4_i47 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i47, 1, 5, &c4_n_emlrtBCI, &c4_b_st);
    }

    c4_s_a = (c4_x + c4_recurrent_term) - chartInstance->c4_v_hat[c4_i47 - 1];
    c4_t_a = c4_s_a;
    c4_u_a = c4_t_a;
    c4_v_a = c4_u_a;
    c4_n_y = c4_v_a * c4_v_a;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_o_emlrtDCI, &c4_st);
    }

    c4_i48 = (int32_T)c4_b_k;
    if ((c4_i48 < 1) || (c4_i48 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i48, 1, 5, &c4_o_emlrtBCI, &c4_st);
    }

    c4_dw = 2.0 * chartInstance->c4_w_hat[c4_i48 - 1] * c4_n_y;
    c4_b_st.site = &c4_h_emlrtRSI;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_p_emlrtDCI, &c4_b_st);
    }

    c4_i49 = (int32_T)c4_b_k;
    if ((c4_i49 < 1) || (c4_i49 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i49, 1, 5, &c4_p_emlrtBCI, &c4_b_st);
    }

    c4_w_a = chartInstance->c4_w_hat[c4_i49 - 1];
    c4_x_a = c4_w_a;
    c4_y_a = c4_x_a;
    c4_ab_a = c4_y_a;
    c4_o_y = c4_ab_a * c4_ab_a;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_q_emlrtDCI, &c4_st);
    }

    c4_i50 = (int32_T)c4_b_k;
    if ((c4_i50 < 1) || (c4_i50 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i50, 1, 5, &c4_q_emlrtBCI, &c4_st);
    }

    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_r_emlrtDCI, &c4_st);
    }

    c4_i51 = (int32_T)c4_b_k;
    if ((c4_i51 < 1) || (c4_i51 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i51, 1, 5, &c4_r_emlrtBCI, &c4_st);
    }

    c4_dr = 2.0 * c4_o_y * ((c4_x + c4_recurrent_term) - chartInstance->
      c4_v_hat[c4_i50 - 1]) * c4_theta_previous[c4_i51 - 1];
    c4_d4 = (c4_b_k - 1.0) + 1.0;
    c4_d5 = c4_b_k;
    c4_f_b = (c4_d4 > c4_d5);
    c4_b1 = c4_f_b;
    c4_b2 = false;
    c4_b3 = (c4_b1 || c4_b2);
    if (c4_b3) {
      c4_i52 = 1;
      c4_i53 = 0;
    } else {
      if (c4_d4 != (real_T)(int32_T)muDoubleScalarFloor(c4_d4)) {
        emlrtIntegerCheckR2012b(c4_d4, &c4_c_emlrtDCI, &c4_st);
      }

      c4_i54 = (int32_T)c4_d4;
      if ((c4_i54 < 1) || (c4_i54 > 5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i54, 1, 5, &c4_c_emlrtBCI, &c4_st);
      }

      c4_i52 = c4_i54;
      if (c4_d5 != (real_T)(int32_T)muDoubleScalarFloor(c4_d5)) {
        emlrtIntegerCheckR2012b(c4_d5, &c4_d_emlrtDCI, &c4_st);
      }

      c4_i56 = (int32_T)c4_d5;
      if ((c4_i56 < 1) || (c4_i56 > 5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i56, 1, 5, &c4_d_emlrtBCI, &c4_st);
      }

      c4_i53 = c4_i56;
    }

    c4_iv[1] = (c4_i53 - c4_i52) + 1;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_b_emlrtDCI, &c4_st);
    }

    c4_i55 = (int32_T)c4_b_k;
    if ((c4_i55 < 1) || (c4_i55 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i55, 1, 5, &c4_b_emlrtBCI, &c4_st);
    }

    c4_d_k = c4_i55 - 1;
    c4_loop_ub = c4_iv[1] - 1;
    for (c4_i57 = 0; c4_i57 <= c4_loop_ub; c4_i57++) {
      if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
        emlrtIntegerCheckR2012b(c4_b_k, &c4_s_emlrtDCI, &c4_st);
      }

      c4_i58 = (int32_T)c4_b_k;
      if ((c4_i58 < 1) || (c4_i58 > 5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i58, 1, 5, &c4_s_emlrtBCI, &c4_st);
      }

      c4_A[c4_d_k + 5 * ((c4_i52 + c4_i57) - 1)] = -chartInstance->
        c4_theta_hat[c4_i58 - 1] * c4_b_dv;
    }

    c4_d6 = (c4_b_k - 1.0) + 1.0;
    c4_d7 = c4_b_k;
    c4_b4 = (c4_d6 > c4_d7);
    c4_b5 = c4_b4;
    c4_b6 = false;
    c4_b7 = (c4_b5 || c4_b6);
    if (c4_b7) {
      c4_i59 = 1;
      c4_i60 = 0;
    } else {
      if (c4_d6 != (real_T)(int32_T)muDoubleScalarFloor(c4_d6)) {
        emlrtIntegerCheckR2012b(c4_d6, &c4_f_emlrtDCI, &c4_st);
      }

      c4_i61 = (int32_T)c4_d6;
      if ((c4_i61 < 1) || (c4_i61 > 5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i61, 1, 5, &c4_f_emlrtBCI, &c4_st);
      }

      c4_i59 = c4_i61;
      if (c4_d7 != (real_T)(int32_T)muDoubleScalarFloor(c4_d7)) {
        emlrtIntegerCheckR2012b(c4_d7, &c4_g_emlrtDCI, &c4_st);
      }

      c4_i63 = (int32_T)c4_d7;
      if ((c4_i63 < 1) || (c4_i63 > 5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i63, 1, 5, &c4_g_emlrtBCI, &c4_st);
      }

      c4_i60 = c4_i63;
    }

    c4_iv1[1] = (c4_i60 - c4_i59) + 1;
    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_e_emlrtDCI, &c4_st);
    }

    c4_i62 = (int32_T)c4_b_k;
    if ((c4_i62 < 1) || (c4_i62 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i62, 1, 5, &c4_e_emlrtBCI, &c4_st);
    }

    c4_e_k = c4_i62 - 1;
    c4_b_loop_ub = c4_iv1[1] - 1;
    for (c4_i64 = 0; c4_i64 <= c4_b_loop_ub; c4_i64++) {
      if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
        emlrtIntegerCheckR2012b(c4_b_k, &c4_t_emlrtDCI, &c4_st);
      }

      c4_i66 = (int32_T)c4_b_k;
      if ((c4_i66 < 1) || (c4_i66 > 5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i66, 1, 5, &c4_t_emlrtBCI, &c4_st);
      }

      c4_B[c4_e_k + 5 * ((c4_i59 + c4_i64) - 1)] = -chartInstance->
        c4_theta_hat[c4_i66 - 1] * c4_dw;
    }

    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_u_emlrtDCI, &c4_st);
    }

    c4_i65 = (int32_T)c4_b_k;
    if ((c4_i65 < 1) || (c4_i65 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i65, 1, 5, &c4_u_emlrtBCI, &c4_st);
    }

    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_v_emlrtDCI, &c4_st);
    }

    c4_i67 = (int32_T)c4_b_k;
    if ((c4_i67 < 1) || (c4_i67 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i67, 1, 5, &c4_v_emlrtBCI, &c4_st);
    }

    if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
      emlrtIntegerCheckR2012b(c4_b_k, &c4_w_emlrtDCI, &c4_st);
    }

    c4_i68 = (int32_T)c4_b_k;
    if ((c4_i68 < 1) || (c4_i68 > 5)) {
      emlrtDynamicBoundsCheckR2012b(c4_i68, 1, 5, &c4_w_emlrtBCI, &c4_st);
    }

    c4_C[(c4_i67 + 5 * (c4_i68 - 1)) - 1] = -chartInstance->c4_theta_hat[c4_i65
      - 1] * c4_dr;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c4_covrtInstance, 4U, 0, 0, 0);
  c4_d = 0.0;
  for (c4_i1 = 0; c4_i1 < 5; c4_i1++) {
    c4_d += chartInstance->c4_alpha_hat[c4_i1] * chartInstance->
      c4_theta_hat[c4_i1];
  }

  c4_d1 = c4_d;
  c4_b_d_hat = c4_d1;
  c4_b_a = c4_eta1 * c4_b_s;
  for (c4_i3 = 0; c4_i3 < 5; c4_i3++) {
    c4_theta_previous[c4_i3] = c4_b_a * chartInstance->c4_theta_hat[c4_i3];
  }

  c4_c_a = c4_eta2 * c4_b_s;
  c4_b_y = c4_c_a;
  c4_c_y = c4_b_y;
  c4_i5 = 0;
  for (c4_i6 = 0; c4_i6 < 5; c4_i6++) {
    c4_i8 = 0;
    for (c4_i9 = 0; c4_i9 < 5; c4_i9++) {
      c4_f_y[c4_i9 + c4_i5] = c4_c_y * c4_A[c4_i8 + c4_i6];
      c4_i8 += 5;
    }

    c4_i5 += 5;
  }

  for (c4_i7 = 0; c4_i7 < 5; c4_i7++) {
    c4_v_hat_dot[c4_i7] = 0.0;
    c4_i11 = 0;
    for (c4_i12 = 0; c4_i12 < 5; c4_i12++) {
      c4_v_hat_dot[c4_i7] += c4_f_y[c4_i11 + c4_i7] *
        chartInstance->c4_alpha_hat[c4_i12];
      c4_i11 += 5;
    }
  }

  c4_e_a = c4_eta3 * c4_b_s;
  c4_e_y = c4_e_a;
  c4_g_y = c4_e_y;
  c4_i13 = 0;
  for (c4_i14 = 0; c4_i14 < 5; c4_i14++) {
    c4_i16 = 0;
    for (c4_i17 = 0; c4_i17 < 5; c4_i17++) {
      c4_f_y[c4_i17 + c4_i13] = c4_g_y * c4_B[c4_i16 + c4_i14];
      c4_i16 += 5;
    }

    c4_i13 += 5;
  }

  for (c4_i15 = 0; c4_i15 < 5; c4_i15++) {
    c4_w_hat_dot[c4_i15] = 0.0;
    c4_i18 = 0;
    for (c4_i20 = 0; c4_i20 < 5; c4_i20++) {
      c4_w_hat_dot[c4_i15] += c4_f_y[c4_i18 + c4_i15] *
        chartInstance->c4_alpha_hat[c4_i20];
      c4_i18 += 5;
    }
  }

  c4_j_a = c4_eta4 * c4_b_s;
  c4_i_y = c4_j_a;
  c4_j_y = c4_i_y;
  c4_i22 = 0;
  for (c4_i23 = 0; c4_i23 < 5; c4_i23++) {
    c4_i25 = 0;
    for (c4_i26 = 0; c4_i26 < 5; c4_i26++) {
      c4_f_y[c4_i26 + c4_i22] = c4_j_y * c4_C[c4_i25 + c4_i23];
      c4_i25 += 5;
    }

    c4_i22 += 5;
  }

  for (c4_i24 = 0; c4_i24 < 5; c4_i24++) {
    c4_r_hat_dot[c4_i24] = 0.0;
    c4_i28 = 0;
    for (c4_i29 = 0; c4_i29 < 5; c4_i29++) {
      c4_r_hat_dot[c4_i24] += c4_f_y[c4_i28 + c4_i24] *
        chartInstance->c4_alpha_hat[c4_i29];
      c4_i28 += 5;
    }
  }

  c4_b = c4_b_dt;
  for (c4_i27 = 0; c4_i27 < 5; c4_i27++) {
    c4_theta_previous[c4_i27] *= c4_b;
  }

  for (c4_i30 = 0; c4_i30 < 5; c4_i30++) {
    chartInstance->c4_alpha_hat[c4_i30] += c4_theta_previous[c4_i30];
  }

  c4_b_b = c4_b_dt;
  for (c4_i33 = 0; c4_i33 < 5; c4_i33++) {
    c4_v_hat_dot[c4_i33] *= c4_b_b;
  }

  for (c4_i34 = 0; c4_i34 < 5; c4_i34++) {
    chartInstance->c4_v_hat[c4_i34] += c4_v_hat_dot[c4_i34];
  }

  c4_c_b = c4_b_dt;
  for (c4_i36 = 0; c4_i36 < 5; c4_i36++) {
    c4_w_hat_dot[c4_i36] *= c4_c_b;
  }

  for (c4_i37 = 0; c4_i37 < 5; c4_i37++) {
    chartInstance->c4_w_hat[c4_i37] += c4_w_hat_dot[c4_i37];
  }

  c4_e_b = c4_b_dt;
  for (c4_i39 = 0; c4_i39 < 5; c4_i39++) {
    c4_r_hat_dot[c4_i39] *= c4_e_b;
  }

  for (c4_i41 = 0; c4_i41 < 5; c4_i41++) {
    chartInstance->c4_r_hat[c4_i41] += c4_r_hat_dot[c4_i41];
  }

  *chartInstance->c4_d_hat = c4_b_d_hat;
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U,
                    *chartInstance->c4_d_hat);
}

static void ext_mode_exec_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_i_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  const mxArray *c4_l_y = NULL;
  const mxArray *c4_m_y = NULL;
  const mxArray *c4_n_y = NULL;
  const mxArray *c4_o_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(14, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", chartInstance->c4_d_hat, 0, 0U, 0,
    0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_c_y = NULL;
  if (!chartInstance->c4_alpha_hat_not_empty) {
    sf_mex_assign(&c4_c_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_c_y, sf_mex_create("y", chartInstance->c4_alpha_hat, 0, 0U,
      1, 0U, 1, 5), false);
  }

  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_d_y = NULL;
  if (!chartInstance->c4_initialised_not_empty) {
    sf_mex_assign(&c4_d_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_d_y, sf_mex_create("y", &chartInstance->c4_initialised, 11,
      0U, 0, 0U, 0), false);
  }

  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_e_y = NULL;
  if (!chartInstance->c4_method_not_empty) {
    sf_mex_assign(&c4_e_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_e_y, sf_mex_create("y", &chartInstance->c4_method, 7, 0U,
      0, 0U, 0), false);
  }

  sf_mex_setcell(c4_y, 3, c4_e_y);
  c4_f_y = NULL;
  if (!chartInstance->c4_method_not_empty) {
    sf_mex_assign(&c4_f_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_f_y, sf_mex_create("y", &chartInstance->c4_b_method, 7, 0U,
      0, 0U, 0), false);
  }

  sf_mex_setcell(c4_y, 4, c4_f_y);
  c4_g_y = NULL;
  if (!chartInstance->c4_alpha_hat_not_empty) {
    sf_mex_assign(&c4_g_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_g_y, sf_mex_create("y", chartInstance->c4_r_hat, 0, 0U, 1,
      0U, 1, 5), false);
  }

  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_h_y = NULL;
  if (!chartInstance->c4_method_not_empty) {
    sf_mex_assign(&c4_h_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_h_y, sf_mex_create("y", &chartInstance->c4_seed, 7, 0U, 0,
      0U, 0), false);
  }

  sf_mex_setcell(c4_y, 6, c4_h_y);
  c4_i_y = NULL;
  if (!chartInstance->c4_method_not_empty) {
    sf_mex_assign(&c4_i_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_i_y, sf_mex_create("y", &chartInstance->c4_c_state, 7, 0U,
      0, 0U, 0), false);
  }

  sf_mex_setcell(c4_y, 7, c4_i_y);
  c4_j_y = NULL;
  if (!chartInstance->c4_state_not_empty) {
    sf_mex_assign(&c4_j_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_j_y, sf_mex_create("y", chartInstance->c4_state, 7, 0U, 1,
      0U, 1, 625), false);
  }

  sf_mex_setcell(c4_y, 8, c4_j_y);
  c4_k_y = NULL;
  if (!chartInstance->c4_b_state_not_empty) {
    sf_mex_assign(&c4_k_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_k_y, sf_mex_create("y", chartInstance->c4_b_state, 7, 0U,
      1, 0U, 1, 2), false);
  }

  sf_mex_setcell(c4_y, 9, c4_k_y);
  c4_l_y = NULL;
  if (!chartInstance->c4_b_state_not_empty) {
    sf_mex_assign(&c4_l_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_l_y, sf_mex_create("y", chartInstance->c4_d_state, 7, 0U,
      1, 0U, 1, 2), false);
  }

  sf_mex_setcell(c4_y, 10, c4_l_y);
  c4_m_y = NULL;
  if (!chartInstance->c4_alpha_hat_not_empty) {
    sf_mex_assign(&c4_m_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_m_y, sf_mex_create("y", chartInstance->c4_theta_hat, 0, 0U,
      1, 0U, 1, 5), false);
  }

  sf_mex_setcell(c4_y, 11, c4_m_y);
  c4_n_y = NULL;
  if (!chartInstance->c4_v_hat_not_empty) {
    sf_mex_assign(&c4_n_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_n_y, sf_mex_create("y", chartInstance->c4_v_hat, 0, 0U, 1,
      0U, 2, 1, 5), false);
  }

  sf_mex_setcell(c4_y, 12, c4_n_y);
  c4_o_y = NULL;
  if (!chartInstance->c4_v_hat_not_empty) {
    sf_mex_assign(&c4_o_y, sf_mex_create("y", NULL, 0, 0U, 1, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c4_o_y, sf_mex_create("y", chartInstance->c4_w_hat, 0, 0U, 1,
      0U, 2, 1, 5), false);
  }

  sf_mex_setcell(c4_y, 13, c4_o_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_ABS_contDyn_model
  (SFc4_ABS_contDyn_modelInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  real_T c4_dv[5];
  real_T c4_dv1[5];
  real_T c4_dv2[5];
  real_T c4_dv3[5];
  real_T c4_dv4[5];
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  uint32_T c4_b_uv[625];
  uint32_T c4_uv1[2];
  uint32_T c4_uv2[2];
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_d_hat = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "d_hat");
  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
                        "alpha_hat", &chartInstance->c4_alpha_hat_not_empty,
                        c4_dv);
  for (c4_i = 0; c4_i < 5; c4_i++) {
    chartInstance->c4_alpha_hat[c4_i] = c4_dv[c4_i];
  }

  chartInstance->c4_initialised = c4_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 2)), "initialised",
    &chartInstance->c4_initialised_not_empty);
  chartInstance->c4_method = c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 3)), "method", &chartInstance->c4_method_not_empty);
  chartInstance->c4_b_method = c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 4)), "method", &chartInstance->c4_b_method_not_empty);
  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 5)),
                        "r_hat", &chartInstance->c4_r_hat_not_empty, c4_dv1);
  for (c4_i1 = 0; c4_i1 < 5; c4_i1++) {
    chartInstance->c4_r_hat[c4_i1] = c4_dv1[c4_i1];
  }

  chartInstance->c4_seed = c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 6)), "seed", &chartInstance->c4_seed_not_empty);
  chartInstance->c4_c_state = c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 7)), "state", &chartInstance->c4_c_state_not_empty);
  c4_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 8)),
                        "state", &chartInstance->c4_state_not_empty, c4_b_uv);
  for (c4_i2 = 0; c4_i2 < 625; c4_i2++) {
    chartInstance->c4_state[c4_i2] = c4_b_uv[c4_i2];
  }

  c4_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 9)),
                        "state", &chartInstance->c4_b_state_not_empty, c4_uv1);
  for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
    chartInstance->c4_b_state[c4_i3] = c4_uv1[c4_i3];
  }

  c4_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 10)),
                        "state", &chartInstance->c4_d_state_not_empty, c4_uv2);
  for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
    chartInstance->c4_d_state[c4_i4] = c4_uv2[c4_i4];
  }

  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 11)),
                        "theta_hat", &chartInstance->c4_theta_hat_not_empty,
                        c4_dv2);
  for (c4_i5 = 0; c4_i5 < 5; c4_i5++) {
    chartInstance->c4_theta_hat[c4_i5] = c4_dv2[c4_i5];
  }

  c4_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 12)),
                        "v_hat", &chartInstance->c4_v_hat_not_empty, c4_dv3);
  for (c4_i6 = 0; c4_i6 < 5; c4_i6++) {
    chartInstance->c4_v_hat[c4_i6] = c4_dv3[c4_i6];
  }

  c4_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 13)),
                        "w_hat", &chartInstance->c4_w_hat_not_empty, c4_dv4);
  for (c4_i7 = 0; c4_i7 < 5; c4_i7++) {
    chartInstance->c4_w_hat[c4_i7] = c4_dv4[c4_i7];
  }

  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static real_T c4_now(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance)
{
  time_t c4_rawtime;
  c4_sxaDueAh1f53T9ESYg9Uc4E c4_timeinfoDouble;
  struct tm c4_timeinfo;
  real_T c4_cDaysMonthWise[12];
  real_T c4_a;
  real_T c4_b_a;
  real_T c4_b_r;
  real_T c4_b_x;
  real_T c4_b_y;
  real_T c4_c_a;
  real_T c4_c_r;
  real_T c4_c_x;
  real_T c4_c_y;
  real_T c4_dDateNum;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_h_x;
  real_T c4_i_x;
  real_T c4_j_x;
  real_T c4_k_x;
  real_T c4_l_x;
  real_T c4_m_x;
  real_T c4_n_x;
  real_T c4_o_x;
  real_T c4_r;
  real_T c4_x;
  boolean_T c4_b_rEQ0;
  boolean_T c4_c_rEQ0;
  boolean_T c4_guard1;
  boolean_T c4_rEQ0;
  (void)chartInstance;
  c4_cDaysMonthWise[0] = 0.0;
  c4_cDaysMonthWise[1] = 31.0;
  c4_cDaysMonthWise[2] = 59.0;
  c4_cDaysMonthWise[3] = 90.0;
  c4_cDaysMonthWise[4] = 120.0;
  c4_cDaysMonthWise[5] = 151.0;
  c4_cDaysMonthWise[6] = 181.0;
  c4_cDaysMonthWise[7] = 212.0;
  c4_cDaysMonthWise[8] = 243.0;
  c4_cDaysMonthWise[9] = 273.0;
  c4_cDaysMonthWise[10] = 304.0;
  c4_cDaysMonthWise[11] = 334.0;
  time(&c4_rawtime);
  c4_timeinfo = *localtime(&c4_rawtime);
  c4_timeinfo.tm_year += 1900;
  c4_timeinfo.tm_mon++;
  c4_timeinfoDouble.tm_min = (real_T)c4_timeinfo.tm_min;
  c4_timeinfoDouble.tm_sec = (real_T)c4_timeinfo.tm_sec;
  c4_timeinfoDouble.tm_hour = (real_T)c4_timeinfo.tm_hour;
  c4_timeinfoDouble.tm_mday = (real_T)c4_timeinfo.tm_mday;
  c4_timeinfoDouble.tm_mon = (real_T)c4_timeinfo.tm_mon;
  c4_timeinfoDouble.tm_year = (real_T)c4_timeinfo.tm_year;
  c4_x = c4_timeinfoDouble.tm_year / 4.0;
  c4_b_x = c4_x;
  c4_b_y = c4_b_x;
  c4_b_y = muDoubleScalarCeil(c4_b_y);
  c4_c_x = c4_timeinfoDouble.tm_year / 100.0;
  c4_d_x = c4_c_x;
  c4_c_y = c4_d_x;
  c4_c_y = muDoubleScalarCeil(c4_c_y);
  c4_e_x = c4_timeinfoDouble.tm_year / 400.0;
  c4_f_x = c4_e_x;
  c4_d_y = c4_f_x;
  c4_d_y = muDoubleScalarCeil(c4_d_y);
  c4_dDateNum = ((((365.0 * c4_timeinfoDouble.tm_year + c4_b_y) - c4_c_y) +
                  c4_d_y) + c4_cDaysMonthWise[(int32_T)c4_timeinfoDouble.tm_mon
                 - 1]) + c4_timeinfoDouble.tm_mday;
  if (c4_timeinfoDouble.tm_mon > 2.0) {
    c4_g_x = c4_timeinfoDouble.tm_year;
    c4_a = c4_g_x;
    c4_h_x = c4_a;
    c4_i_x = c4_h_x;
    if (c4_i_x == 0.0) {
      c4_r = 0.0;
    } else {
      c4_r = muDoubleScalarRem(c4_i_x, 4.0);
      c4_rEQ0 = (c4_r == 0.0);
      if (c4_rEQ0) {
        c4_r = 0.0;
      } else if (c4_r < 0.0) {
        c4_r += 4.0;
      }
    }

    c4_guard1 = false;
    if (c4_r == 0.0) {
      c4_j_x = c4_timeinfoDouble.tm_year;
      c4_b_a = c4_j_x;
      c4_k_x = c4_b_a;
      c4_m_x = c4_k_x;
      if (c4_m_x == 0.0) {
        c4_b_r = 0.0;
      } else {
        c4_b_r = muDoubleScalarRem(c4_m_x, 100.0);
        c4_b_rEQ0 = (c4_b_r == 0.0);
        if (c4_b_rEQ0) {
          c4_b_r = 0.0;
        } else if (c4_b_r < 0.0) {
          c4_b_r += 100.0;
        }
      }

      if (c4_b_r != 0.0) {
        c4_dDateNum++;
      } else {
        c4_guard1 = true;
      }
    } else {
      c4_guard1 = true;
    }

    if (c4_guard1) {
      c4_l_x = c4_timeinfoDouble.tm_year;
      c4_c_a = c4_l_x;
      c4_n_x = c4_c_a;
      c4_o_x = c4_n_x;
      if (c4_o_x == 0.0) {
        c4_c_r = 0.0;
      } else {
        c4_c_r = muDoubleScalarRem(c4_o_x, 400.0);
        c4_c_rEQ0 = (c4_c_r == 0.0);
        if (c4_c_rEQ0) {
          c4_c_r = 0.0;
        } else if (c4_c_r < 0.0) {
          c4_c_r += 400.0;
        }
      }

      if (c4_c_r == 0.0) {
        c4_dDateNum++;
      }
    }
  }

  c4_dDateNum += ((c4_timeinfoDouble.tm_hour * 3600.0 + c4_timeinfoDouble.tm_min
                   * 60.0) + c4_timeinfoDouble.tm_sec) / 86400.0;
  return c4_dDateNum;
}

static void c4_randn(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance, const
                     emlrtStack *c4_sp, real_T c4_r[5])
{
  static real_T c4_dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static real_T c4_dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_st;
  real_T c4_b_k;
  real_T c4_b_r;
  real_T c4_b_u;
  real_T c4_b_x;
  real_T c4_c_u;
  real_T c4_c_x;
  real_T c4_d;
  real_T c4_d_u;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_u;
  real_T c4_x;
  real_T c4_y;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_k;
  uint32_T c4_u32[2];
  uint32_T c4_b_i;
  uint32_T c4_ip1;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_q_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  if (!chartInstance->c4_b_method_not_empty) {
    chartInstance->c4_b_method = 0U;
    chartInstance->c4_b_method_not_empty = true;
    for (c4_i = 0; c4_i < 2; c4_i++) {
      chartInstance->c4_d_state[c4_i] = 362436069U + 158852560U * (uint32_T)c4_i;
    }

    chartInstance->c4_d_state_not_empty = true;
  }

  c4_b_st.site = &c4_r_emlrtRSI;
  if (!chartInstance->c4_method_not_empty) {
    chartInstance->c4_method = 7U;
    chartInstance->c4_method_not_empty = true;
  }

  c4_c_st.site = &c4_s_emlrtRSI;
  if (!chartInstance->c4_state_not_empty) {
    for (c4_i1 = 0; c4_i1 < 625; c4_i1++) {
      chartInstance->c4_state[c4_i1] = c4_uv[c4_i1];
    }

    chartInstance->c4_state_not_empty = true;
  }

  for (c4_k = 0; c4_k < 5; c4_k++) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_d_st.site = &c4_t_emlrtRSI;
    c4_e_st.site = &c4_u_emlrtRSI;
    do {
      c4_exitg1 = 0;
      c4_b_genrand_uint32_vector(chartInstance, chartInstance->c4_state, c4_u32);
      c4_b_i = (c4_u32[1] >> 24U) + 1U;
      c4_ip1 = c4_b_i + 1U;
      c4_u = ((real_T)(c4_u32[0] >> 3U) * 1.6777216E+7 + (real_T)(c4_u32[1] &
               16777215U)) * 2.2204460492503131E-16 - 1.0;
      c4_b_r = c4_u * c4_dv[(int32_T)c4_ip1 - 1];
      c4_x = c4_b_r;
      c4_b_x = c4_x;
      c4_c_x = c4_b_x;
      c4_y = muDoubleScalarAbs(c4_c_x);
      if (c4_y <= c4_dv[(int32_T)c4_b_i - 1]) {
        c4_exitg1 = 1;
      } else if (c4_b_i < 256U) {
        c4_f_st.site = &c4_v_emlrtRSI;
        c4_b_u = c4_b_genrandu(chartInstance, &c4_f_st, chartInstance->c4_state);
        c4_d_x = -0.5 * c4_b_r * c4_b_r;
        c4_f_x = c4_d_x;
        c4_f_x = muDoubleScalarExp(c4_f_x);
        if (c4_dv1[(int32_T)c4_ip1 - 1] + c4_b_u * (c4_dv1[(int32_T)c4_b_i - 1]
             - c4_dv1[(int32_T)c4_ip1 - 1]) < c4_f_x) {
          c4_exitg1 = 1;
        }
      } else {
        do {
          c4_f_st.site = &c4_w_emlrtRSI;
          c4_c_u = c4_b_genrandu(chartInstance, &c4_f_st,
            chartInstance->c4_state);
          c4_e_x = muDoubleScalarLog(c4_c_u) * 0.273661237329758;
          c4_f_st.site = &c4_x_emlrtRSI;
          c4_d_u = c4_b_genrandu(chartInstance, &c4_f_st,
            chartInstance->c4_state);
        } while (!(-2.0 * muDoubleScalarLog(c4_d_u) > c4_e_x * c4_e_x));

        if (c4_b_r < 0.0) {
          c4_b_r = c4_e_x - 3.65415288536101;
        } else {
          c4_b_r = 3.65415288536101 - c4_e_x;
        }

        c4_exitg1 = 1;
      }
    } while (c4_exitg1 == 0);

    c4_d = c4_b_r;
    c4_r[(int32_T)c4_b_k - 1] = c4_d;
  }
}

static void c4_genrand_uint32_vector(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, uint32_T c4_mt[625], uint32_T c4_b_mt[625], uint32_T c4_u[2])
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 625; c4_i++) {
    c4_b_mt[c4_i] = c4_mt[c4_i];
  }

  c4_b_genrand_uint32_vector(chartInstance, c4_b_mt, c4_u);
}

static void c4_genrandu(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, uint32_T c4_mt[625], uint32_T c4_b_mt[625], real_T
  *c4_r)
{
  int32_T c4_i;
  for (c4_i = 0; c4_i < 625; c4_i++) {
    c4_b_mt[c4_i] = c4_mt[c4_i];
  }

  *c4_r = c4_b_genrandu(chartInstance, c4_sp, c4_b_mt);
}

static void c4_rand(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, real_T c4_r[5])
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  real_T c4_b_k;
  real_T c4_b_r;
  real_T c4_d;
  int32_T c4_i;
  int32_T c4_k;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_y_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  if (!chartInstance->c4_method_not_empty) {
    chartInstance->c4_method = 7U;
    chartInstance->c4_method_not_empty = true;
  }

  c4_b_st.site = &c4_s_emlrtRSI;
  if (!chartInstance->c4_state_not_empty) {
    for (c4_i = 0; c4_i < 625; c4_i++) {
      chartInstance->c4_state[c4_i] = c4_uv[c4_i];
    }

    chartInstance->c4_state_not_empty = true;
  }

  for (c4_k = 0; c4_k < 5; c4_k++) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_c_st.site = &c4_ab_emlrtRSI;
    c4_d_st.site = &c4_bb_emlrtRSI;
    c4_b_r = c4_b_genrandu(chartInstance, &c4_d_st, chartInstance->c4_state);
    c4_d = c4_b_r;
    c4_r[(int32_T)c4_b_k - 1] = c4_d;
  }
}

const mxArray *sf_c4_ABS_contDyn_model_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_c_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, real_T c4_y[5])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId,
                        c4_svPtr, c4_y);
  sf_mex_destroy(&c4_nullptr);
}

static void c4_d_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, real_T c4_y[5])
{
  real_T c4_dv[5];
  int32_T c4_i;
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv, 1, 0, 0U, 1, 0U, 1, 5);
    for (c4_i = 0; c4_i < 5; c4_i++) {
      c4_y[c4_i] = c4_dv[c4_i];
    }
  }

  sf_mex_destroy(&c4_u);
}

static boolean_T c4_e_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr)
{
  emlrtMsgIdentifier c4_thisId;
  boolean_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId,
    c4_svPtr);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static boolean_T c4_f_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr)
{
  boolean_T c4_b;
  boolean_T c4_y;
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b, 1, 11, 0U, 0, 0U, 0);
    c4_y = c4_b;
  }

  sf_mex_destroy(&c4_u);
  return c4_y;
}

static uint32_T c4_g_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr)
{
  emlrtMsgIdentifier c4_thisId;
  uint32_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId,
    c4_svPtr);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static uint32_T c4_h_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr)
{
  uint32_T c4_b_u;
  uint32_T c4_y;
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 7, 0U, 0, 0U, 0);
    c4_y = c4_b_u;
  }

  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_i_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, uint32_T c4_y[625])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId,
                        c4_svPtr, c4_y);
  sf_mex_destroy(&c4_nullptr);
}

static void c4_j_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, uint32_T c4_y[625])
{
  int32_T c4_i;
  uint32_T c4_b_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_b_uv, 1, 7, 0U, 1, 0U, 1,
                  625);
    for (c4_i = 0; c4_i < 625; c4_i++) {
      c4_y[c4_i] = c4_b_uv[c4_i];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_k_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, uint32_T c4_y[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId,
                        c4_svPtr, c4_y);
  sf_mex_destroy(&c4_nullptr);
}

static void c4_l_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, uint32_T c4_y[2])
{
  int32_T c4_i;
  uint32_T c4_b_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_b_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c4_i = 0; c4_i < 2; c4_i++) {
      c4_y[c4_i] = c4_b_uv[c4_i];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_m_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier,
  boolean_T *c4_svPtr, real_T c4_y[5])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId,
                        c4_svPtr, c4_y);
  sf_mex_destroy(&c4_nullptr);
}

static void c4_n_emlrt_marshallIn(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T *c4_svPtr, real_T c4_y[5])
{
  real_T c4_dv[5];
  int32_T c4_i;
  (void)chartInstance;
  if (mxIsEmpty(c4_u)) {
    *c4_svPtr = false;
  } else {
    *c4_svPtr = true;
    sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv, 1, 0, 0U, 1, 0U, 2, 1, 5);
    for (c4_i = 0; c4_i < 5; c4_i++) {
      c4_y[c4_i] = c4_dv[c4_i];
    }
  }

  sf_mex_destroy(&c4_u);
}

static void c4_b_genrand_uint32_vector(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance, uint32_T c4_mt[625], uint32_T c4_u[2])
{
  real_T c4_b_j;
  real_T c4_c_kk;
  int32_T c4_b_kk;
  int32_T c4_j;
  int32_T c4_kk;
  uint32_T c4_b_y;
  uint32_T c4_c_y;
  uint32_T c4_d_y;
  uint32_T c4_e_y;
  uint32_T c4_f_y;
  uint32_T c4_g_y;
  uint32_T c4_mti;
  uint32_T c4_y;
  (void)chartInstance;
  for (c4_j = 0; c4_j < 2; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    c4_mti = c4_mt[624] + 1U;
    if (c4_mti >= 625U) {
      for (c4_kk = 0; c4_kk < 227; c4_kk++) {
        c4_c_kk = (real_T)c4_kk + 1.0;
        c4_y = (c4_mt[(int32_T)c4_c_kk - 1] & 2147483648U) | (c4_mt[(int32_T)
          (c4_c_kk + 1.0) - 1] & 2147483647U);
        c4_b_y = c4_y;
        c4_d_y = c4_b_y;
        if ((c4_d_y & 1U) == 0U) {
          c4_d_y >>= 1U;
        } else {
          c4_d_y = c4_d_y >> 1U ^ 2567483615U;
        }

        c4_mt[(int32_T)c4_c_kk - 1] = c4_mt[(int32_T)(c4_c_kk + 397.0) - 1] ^
          c4_d_y;
      }

      for (c4_b_kk = 0; c4_b_kk < 396; c4_b_kk++) {
        c4_c_kk = (real_T)c4_b_kk + 228.0;
        c4_y = (c4_mt[(int32_T)c4_c_kk - 1] & 2147483648U) | (c4_mt[(int32_T)
          (c4_c_kk + 1.0) - 1] & 2147483647U);
        c4_f_y = c4_y;
        c4_g_y = c4_f_y;
        if ((c4_g_y & 1U) == 0U) {
          c4_g_y >>= 1U;
        } else {
          c4_g_y = c4_g_y >> 1U ^ 2567483615U;
        }

        c4_mt[(int32_T)c4_c_kk - 1] = c4_mt[(int32_T)((c4_c_kk + 1.0) - 228.0) -
          1] ^ c4_g_y;
      }

      c4_y = (c4_mt[623] & 2147483648U) | (c4_mt[0] & 2147483647U);
      c4_c_y = c4_y;
      c4_e_y = c4_c_y;
      if ((c4_e_y & 1U) == 0U) {
        c4_e_y >>= 1U;
      } else {
        c4_e_y = c4_e_y >> 1U ^ 2567483615U;
      }

      c4_mt[623] = c4_mt[396] ^ c4_e_y;
      c4_mti = 1U;
    }

    c4_y = c4_mt[(int32_T)c4_mti - 1];
    c4_mt[624] = c4_mti;
    c4_y ^= c4_y >> 11U;
    c4_y ^= c4_y << 7U & 2636928640U;
    c4_y ^= c4_y << 15U & 4022730752U;
    c4_y ^= c4_y >> 18U;
    c4_u[(int32_T)c4_b_j - 1] = c4_y;
  }
}

static real_T c4_b_genrandu(SFc4_ABS_contDyn_modelInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, uint32_T c4_mt[625])
{
  static char_T c4_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_a;
  int32_T c4_exitg1;
  int32_T c4_i;
  int32_T c4_k;
  uint32_T c4_b_mt[625];
  uint32_T c4_u[2];
  boolean_T c4_b_isvalid;
  boolean_T c4_exitg2;
  boolean_T c4_isvalid;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on: */
  /*  */
  /*  A C-program for MT19937, with initialization improved 2002/1/26. */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto. */
  /*  */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura, */
  /*  All rights reserved. */
  /*  */
  /*  Redistribution and use in source and binary forms, with or without */
  /*  modification, are permitted provided that the following conditions */
  /*  are met: */
  /*  */
  /*    1. Redistributions of source code must retain the above copyright */
  /*       notice, this list of conditions and the following disclaimer. */
  /*  */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer */
  /*       in the documentation and/or other materials provided with the */
  /*       distribution. */
  /*  */
  /*    3. The names of its contributors may not be used to endorse or */
  /*       promote products derived from this software without specific */
  /*       prior written permission. */
  /*  */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  */
  /* =============================   END   ================================= */
  do {
    c4_exitg1 = 0;
    c4_b_genrand_uint32_vector(chartInstance, c4_mt, c4_u);
    c4_u[0] >>= 5U;
    c4_u[1] >>= 6U;
    if ((c4_u[0] == 0U) && (c4_u[1] == 0U)) {
      for (c4_i = 0; c4_i < 625; c4_i++) {
        c4_b_mt[c4_i] = c4_mt[c4_i];
      }

      if ((c4_b_mt[624] >= 1U) && (c4_b_mt[624] < 625U)) {
        c4_isvalid = true;
      } else {
        c4_isvalid = false;
      }

      c4_b_isvalid = c4_isvalid;
      if (c4_isvalid) {
        c4_b_isvalid = false;
        c4_k = 0;
        c4_exitg2 = false;
        while ((!c4_exitg2) && (c4_k + 1 < 625)) {
          if (c4_b_mt[c4_k] == 0U) {
            c4_a = c4_k + 1;
            c4_k = c4_a;
          } else {
            c4_b_isvalid = true;
            c4_exitg2 = true;
          }
        }
      }

      if (!c4_b_isvalid) {
        c4_y = NULL;
        sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 37),
                      false);
        c4_b_y = NULL;
        sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 37),
                      false);
        sf_mex_call(c4_sp, &c4_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                    sf_mex_call(c4_sp, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(c4_sp, NULL, "message", 1U, 1U, 14, c4_b_y)));
      }
    } else {
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  return 1.1102230246251565E-16 * ((real_T)c4_u[0] * 6.7108864E+7 + (real_T)
    c4_u[1]);
}

static void init_dsm_address_info(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_ABS_contDyn_modelInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_lambda_e = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_s = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c4_d_hat = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_ABS_contDyn_model_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1137688282U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3481751809U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(111150291U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2458225426U);
}

mxArray *sf_c4_ABS_contDyn_model_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c4_ABS_contDyn_model_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rawtime");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_ABS_contDyn_model_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_ABS_contDyn_model(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtWEFP2zAUdqpSgSZNPeyyW38BKjAN2GVmlRCVQCrbNDFhaJ3EbSI5SeW40N1yQeK44w4c9jM"
    "47ifsp/ATiBuXdVa0SNQsaagly3pun5P3vu99yjMw2kcgHi/jefsagFq8rsazApKxIm1D/sd42K"
    "8+7Dfiyb8NidgPmdW249XH3sTGo3Hb7wcT3x3w5/xayvnGzPlrcj8Zd+/n838FVf9qiv/KjH9d2"
    "nbXwVzGPs3T49+jDufzT54PM+JYU+IQNqZDB8tYpuf8Bv/G21Dwrkhb+FDggmHK+6TFU1HiqU+D"
    "gV/hZI1OteRlUfB5oeAjbNd3uYupGxK7QPh8SvABX0qFT5YO1BR8hO0R7gR24t8xcsblJEpwuY6"
    "gDl2NMvLRUfIh7NY71GHBgGGvse9SEqKjvc+Hex/Qx83m5hsT8SCgZjBGxKOIuibyMKfYRAz7dn"
    "/koyFzLzAn4ueu2Fv3ysCLk9x5cSV5caWFF9cZ+ThW8nGsnRf+urdAupH2/cBmvh9y1/Nf51LPe"
    "6XS82YGLtW/cKmCkBBb+B3kXa/wJsGjc6OlXscZeWgp/GzNXa/MH8gKXdT6DHmsN9LfyZsPkZ3w"
    "oUG08OFHRj5MJR+mdv3uetZg4+1Oc7s7yXN/RKeCvuSLDj2XfOn9H75YSj6sJ+AL39jd3drGTCX"
    "Mki8a+PJT8gWWRl9Ch21ZgT8opb7k3k98l/3E7bKfKMo9HncIL9w9XqMndQU/q3uitPq9KFS/dy"
    "r7vbNnj8tlkXCBZ/Le+1wbLvcTq3+V"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_ABS_contDyn_model_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s3KBFAG6C5akJVH9kMC4coC";
}

static void sf_opaque_initialize_c4_ABS_contDyn_model(void *chartInstanceVar)
{
  initialize_params_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    chartInstanceVar);
  initialize_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_ABS_contDyn_model(void *chartInstanceVar)
{
  enable_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_ABS_contDyn_model(void *chartInstanceVar)
{
  disable_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_ABS_contDyn_model(void *chartInstanceVar)
{
  sf_gateway_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_ABS_contDyn_model(SimStruct* S)
{
  return get_sim_state_c4_ABS_contDyn_model
    ((SFc4_ABS_contDyn_modelInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_ABS_contDyn_model(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_ABS_contDyn_model(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_ABS_contDyn_modelInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ABS_contDyn_model_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_ABS_contDyn_model
      ((SFc4_ABS_contDyn_modelInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_ABS_contDyn_model(void *chartInstanceVar)
{
  mdl_start_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc4_ABS_contDyn_modelInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_ABS_contDyn_model(void *chartInstanceVar)
{
  mdl_terminate_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_ABS_contDyn_model(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_ABS_contDyn_model((SFc4_ABS_contDyn_modelInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_ABS_contDyn_model_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [29] = {
    "eNrtWs9vG0UUXkdp1NI2SqVK/BASOXKhpEl/IgR21nZrSKhbu6FQt+54d+wdZXZmOzPr2JwioUo",
    "5InHh0AN/AsdKXPgTOPIfcOXIkTe7a9dsTLxrm9pJa8lxZtffvnnf+96bN+s1MqVtA17L8P7rY8",
    "NYgs/T8F4wwtepaJwZeIfHF41Po3H5LcOwHCRUiTW5kf5lcRu3MKv4zSbppMQy3y0jgVw5hl2GX",
    "HwPS059RThLN3nCmlhgZsEFPC5UKruSuD4lbLfoM0tbll87xHIqDvepvQkXRPYdRrv/ZdfzVRks",
    "5onAlipibCtHcL/lFClqHc2CUHumg61d6bupuZJYVXxPuyq3faqIR3Ghg60SkwoBC3KEvxWFFDZ",
    "VJ7VCiKz00Nz1KEEsOdcOkhXsgToUvu/Z8PeOr4C9hHbBXoMwpLggiBZcamqFJ8SWKcxzG2RNU/",
    "OsXJXHDb/VIqyl2RW+ixn4DzpJwFXT5G0sUAvfYSlzUHtX6AQB7usyeQ6WtCzHykHfDaMix8IGd",
    "gttYEiOabdoMRNRKtNhq9zbwm1MA/t5pNAY2NB+CrCUxK7yHSR0FqTMJJ+Rpz6OsCZnNkke4XYM",
    "FRTcr6B4JoATV0sK20Bzf+r9C43SpC8Vd01Io/zWVkJ7h7ElprBoIgsnrn0CEYlhwoGuUtq1iUQ",
    "NqtHAkgq8THwFzMaGGrLps/weF7vAcdoi+5IrnQnp0Nhu4TxWOCgYBVD3DqJ+wjm7Eiqclsd9CR",
    "UrnV3A6vwZC2why8G2Xk8IxdtY6gvIxPUZ1pEceNsmqpvH0hLES5pJvsQ2LCSapWrXw/fZLuN7r",
    "Ci4W4k6giN0hTFUDSQYLAubsCyJbhEmn2zWAj+tamWN0565SFHU0Nq4hRmsLNpXvRIiC7KqwKB1",
    "gwlNgq2Q72BpZ5JIBe1UtxDkgB30o+9k0vWjF6LxRj+XSrIqIFIIlmEGnVKuETR7uEpcHByoIOg",
    "pwmH00nbXjJd2zywcbXcB/suMiTMmxN0ewC0O4efiAG4lGltX6rnNSt3iTOW7rO72epT4PM4l4H",
    "shAc44hHvJc+/zwwF8ZohdY+BzFF8Lh/gCxjIhLjuAOx+zsxjDLUWckdMXznfoPevPX37E1e8Pf",
    "p1EH8576fS8HI3f7/Vn/RWsfajIJ9HD2zE96LHc+HKzmLt1zbyKdr/YuX1zd9u8YnEzuN6Ld4+e",
    "73Jsvr3jq/BWUOCCeimskh3ttfQY+eEeQGNvDMx3aQQfZwb0BDvVzyfDX8zG8cP4OhXjS4/tuoN",
    "UTL/jz2MlOxn+sK6H+XEm5oceI+o5KPKld53fjXT67OWaxlCDGN6Q+QzzZyHmz0rPmew32eBz/+",
    "FUeDku8Tkbi8/ZYJ8PDSCi0IjacxSfShgfY+dExWdUHViKxUePXawcbof4cmbGcXmwH8blYD87j",
    "bq6P4KPcowPPTY/qZUFb8HGcDVoTGvbuepWbrN2b31t/UqjpjinDd6pYZfWKGnUwtawJhCzYeNS",
    "86BLg75an67rY5fck6CLBzPXxbNIF8+moouDEXzcjfFxd+q6YJfcY1Q3hvUPYqB/mHk9/+1xVM+",
    "fnKh6vjYiLov/isuiIWEnGPTPs87X7PMwHuXnU8nXzggezJg+zYnzVbBWlKHHNT+D+zu9/dqs9b",
    "Bvh3pYxVPRw08j+GjE+GhMvX7XXat1+dqNtev1gOemT3sF/Y1eplHPI708eTV6sWJ8WP+DXtTlm",
    "zc3riMRF8wbvUxBLz9HesmemPoiHbFhcdY6kfVl5vuJH6L9xIs3+4l5uY+nHKzm7j7e6pOorqDX",
    "6j7RsPxtz9V+72G033v02sdlb57ikn0U3fd+PNW4HJffMecdN01epvW76jBcZkyc8Ypxk/qX9vf",
    "i4/79o+5nGbHvr8yxH0fVpzTPDcybX3+kXD8+iMaf9Z/pMx1C7SFPFUWntzBqDjt7QvT9d0r+es",
    "8xFDR/0UPJ327kGKJdScJHonqHYa/QxqJ/SmAkhz+rNYt1KGnffy6W33q8R5jN9+RHl9evrk+yr",
    "v0DUEpwfQ==",
    ""
  };

  static char newstr [2037] = "";
  newstr[0] = '\0';
  for (i = 0; i < 29; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_ABS_contDyn_model(SimStruct *S)
{
  const char* newstr = sf_c4_ABS_contDyn_model_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(219220073U));
  ssSetChecksum1(S,(1666346104U));
  ssSetChecksum2(S,(1704177895U));
  ssSetChecksum3(S,(3146285908U));
}

static void mdlRTW_c4_ABS_contDyn_model(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_ABS_contDyn_model(SimStruct *S)
{
  SFc4_ABS_contDyn_modelInstanceStruct *chartInstance;
  chartInstance = (SFc4_ABS_contDyn_modelInstanceStruct *)utMalloc(sizeof
    (SFc4_ABS_contDyn_modelInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_ABS_contDyn_modelInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_ABS_contDyn_model;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_ABS_contDyn_model;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_ABS_contDyn_model;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_ABS_contDyn_model;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_ABS_contDyn_model;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_ABS_contDyn_model;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_ABS_contDyn_model;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_ABS_contDyn_model;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_ABS_contDyn_model;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_ABS_contDyn_model;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_ABS_contDyn_model;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_ABS_contDyn_model;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_ABS_contDyn_model(chartInstance);
}

void c4_ABS_contDyn_model_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_ABS_contDyn_model(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_ABS_contDyn_model(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_ABS_contDyn_model(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_ABS_contDyn_model_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
