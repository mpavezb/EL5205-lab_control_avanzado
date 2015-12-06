/*
 * Planilla_3DOF_Crane_data.c
 *
 * Code generation for model "Planilla_3DOF_Crane.mdl".
 *
 * Model version              : 1.160
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Mon Nov 02 12:01:11 2015
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "Planilla_3DOF_Crane.h"
#include "Planilla_3DOF_Crane_private.h"

/* Block parameters (auto storage) */
Parameters_Planilla_3DOF_Crane Planilla_3DOF_Crane_P = {
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  1.0,
  2.0,
  60.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  1.0,

  { 0.0, 0.0 },

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0 },
  0.0,

  { 0.0, 0.0 },
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  1.0,
  2.0,
  60.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,
  1.0,

  { 0.0, 0.0 },

  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0 },
  0.0,

  { 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  10.0,
  -10.0,
  10.0,
  -10.0,
  0.0,
  0.0,
  0.0,
  4.0E+7,
  9765.625,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  0.28111,
  0.0,
  1.0,
  1.0,
  0.0,
  0.0,

  { 1.5339807878856413E-5, -8.379961993243243E-7, -6.9576985736241586E-7,
    0.0015339807878856412, 0.0015339807878856412 },
  1.0,
  7.0,
  -7.0,
  -1.0,
  2.0,
  10.0,
  -10.0,

  { 0.0, 0.0, 0.0, 1.0 },
  -0.5,
  -2.0,
  57.295779513082323,
  57.295779513082323,
  57.295779513082323,
  0.2,
  60.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 0.0, 0.0 },

  { 0.0, 0.0 },
  0.0,

  { 0.0, 0.0, 0.0, 0.0 },

  { 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.0 },

  { 0.0, 0.0 },

  { 0.42806476734895149, -0.39776488155700795, 325.81112336663585,
    -304.24510171803627, -0.39776488155700807, 0.37355379670085614,
    -304.25356577603907, 284.11865586995134 },
  0.0,

  { 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 0.0, 0.0 },

  { 0.0, 0.0 },
  0.0,

  { 0.0, 0.0, 0.0, 0.0 },
  0.0,
  0.0,
  0.0,

  { 0.39382850334384961, 0.43002040308819112, 38.461504177408706,
    44.47983777571158, 0.43002040308819073, 0.52031212108876068,
    44.556684342695362, 51.588323478429949 },
  0.0,

  { 0.0, 0.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  0.5,
  -0.0,

  { 1.0, 0.0, 0.0, 0.0, -8.5085547712845946E-5, 0.99933356903486281,
    -0.017015219169138066, -0.13327138671280764, 0.010000000000000002, 0.0, 1.0,
    0.0, -2.8363109518569028E-7, 0.009997778464738271, -8.5085547712845933E-5,
    0.99933356903486281 },

  { 0.00091237501692542937, 0.0010563776453479425, 0.18247200690332185,
    0.21125205918207321 },

  { 0.0, 0.0, 0.0, 0.0 },

  { 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.0, 0.0 },

  { 0.0, 0.0 },
  0.0,
  0.0,
  0.5,
  -0.0,

  { 1.0, 0.0, 0.0, 0.0, 6.5539931273146319E-7, 0.99999370825659761,
    0.0013107972509264294, -0.012583473609271228, 0.001, 0.0, 1.0, 0.0,
    2.1846652921294483E-10, 0.00099999790275131931, 6.5539931273146308E-7,
    0.99999370825659761 },

  { 0.00050326444866466414, -0.00046996005718782496, 1.0065287946586996,
    -0.93991912875171335 },

  { 0.0, 0.0, 0.0, 0.0 },

  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 },
  2,
  0,
  0,
  0,
  0,
  1,
  0,

  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  4U,

  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  1000U,

  { 0U, 1U, 2U },

  { 0U, 1U, 2U, 3U, 4U },

  { 8U, 9U, 10U, 11U, 12U },

  { 0U, 1U, 2U },

  { 0U, 1U, 2U, 4U },
  0,
  0,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  0,
  1,
  0,
  0,
  0,
  0,
  1,
  0,
  1,
  0,
  0,
  1,
  0,
  1,
  0,
  1,
  0,
  1,
  0,
  1,
  0,
  0,
  0,
  1,
  1,
  1,
  0,

  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0 },

  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0 }
};
