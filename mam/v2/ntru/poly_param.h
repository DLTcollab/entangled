/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * MAM is based on an original implementation & specification by apmi.bsu.by
 * [ITSec Lab]
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef __MAM_V2_NTRU_POLY_PARAM_H__
#define __MAM_V2_NTRU_POLY_PARAM_H__

#ifdef __cplusplus
extern "C" {
#endif

// [γ⁰=1, γ⁻¹, …, γ²ⁿ⁻¹=γ⁻¹, γ²ⁿ=1]
#if defined(MAM2_POLY_MRED_BINARY)
static poly_coeff_t poly_gamma_exp[2 * MAM2_POLY_N + 1] = {
    4091,  4059,  3835,  2267,  3580,  482,   3374,  11329, 5569,  2116,  2523,
    5372,  737,   5159,  11535, 7011,  12210, 11736, 8418,  9770,  6945,  11748,
    8502,  10358, 11061, 3693,  1273,  8911,  932,   6524,  8801,  162,   1134,
    7938,  6410,  8003,  6865,  11188, 4582,  7496,  3316,  10923, 2727,  6800,
    10733, 1397,  9779,  7008,  12189, 11589, 7389,  2567,  5680,  2893,  7962,
    6578,  9179,  2808,  7367,  2413,  4602,  7636,  4296,  5494,  1591,  11137,
    4225,  4997,  10401, 11362, 5800,  3733,  1553,  10871, 2363,  4252,  5186,
    11724, 8334,  9182,  2829,  7514,  3442,  11805, 8901,  862,   6034,  5371,
    730,   5110,  11192, 4610,  7692,  4688,  8238,  8510,  10414, 11453, 6437,
    8192,  8188,  8160,  7964,  6592,  9277,  3494,  12169, 11449, 6409,  7996,
    6816,  10845, 2181,  2978,  8557,  10743, 1467,  10269, 10438, 11621, 7613,
    4135,  4367,  5991,  5070,  10912, 2650,  6261,  6960,  11853, 9237,  3214,
    10209, 10018, 8681,  11611, 7543,  3645,  937,   6559,  9046,  1877,  850,
    5950,  4783,  8903,  876,   6132,  6057,  5532,  1857,  710,   4970,  10212,
    10039, 8828,  351,   2457,  4910,  9792,  7099,  537,   3759,  1735,  12145,
    11281, 5233,  12053, 10637, 725,   5075,  10947, 2895,  7976,  6676,  9865,
    7610,  4114,  4220,  4962,  10156, 9647,  6084,  5721,  3180,  9971,  8352,
    9308,  3711,  1399,  9793,  7106,  586,   4102,  4136,  4374,  6040,  5413,
    1024,  7168,  1020,  7140,  824,   5768,  3509,  12274, 12184, 11554, 7144,
    852,   5964,  4881,  9589,  5678,  2879,  7864,  5892,  4377,  6061,  5560,
    2053,  2082,  2285,  3706,  1364,  9548,  5391,  870,   6090,  5763,  3474,
    12029, 10469, 11838, 9132,  2479,  5064,  10870, 2356,  4203,  4843,  9323,
    3816,  2134,  2649,  6254,  6911,  11510, 6836,  10985, 3161,  9838,  7421,
    2791,  7248,  1580,  11060, 3686,  1224,  8568,  10820, 2006,  1753,  12271,
    12163, 11407, 6115,  5938,  4699,  8315,  9049,  1898,  997,   6979,  11986,
    10168, 9731,  6672,  9837,  7414,  2742,  6905,  11468, 6542,  8927,  1044,
    7308,  2000,  1711,  11977, 10105, 9290,  3585,  517,   3619,  755,   5285,
    128,   896,   6272,  7037,  103,   721,   5047,  10751, 1523,  10661, 893,
    6251,  6890,  11363, 5807,  3782,  1896,  983,   6881,  11300, 5366,  695,
    4865,  9477,  4894,  9680,  6315,  7338,  2210,  3181,  9978,  8401,  9651,
    6112,  5917,  4552,  7286,  1846,  633,   4431,  6439,  8206,  8286,  8846,
    477,   3339,  11084, 3854,  2400,  4511,  6999,  12126, 11148, 4302,  5536,
    1885,  906,   6342,  7527,  3533,  153,   1071,  7497,  3323,  10972, 3070,
    9201,  2962,  8445,  9959,  8268,  8720,  11884, 9454,  4733,  8553,  10715,
    1271,  8897,  834,   5838,  3999,  3415,  11616, 7578,  3890,  2652,  6275,
    7058,  250,   1750,  12250, 12016, 10378, 11201, 4673,  8133,  7775,  5269,
    16,    112,   784,   5488,  1549,  10843, 2167,  2880,  7871,  5941,  4720,
    8462,  10078, 9101,  2262,  3545,  237,   1659,  11613, 7557,  3743,  1623,
    11361, 5793,  3684,  1210,  8470,  10134, 9493,  5006,  10464, 11803, 8887,
    764,   5348,  569,   3983,  3303,  10832, 2090,  2341,  4098,  4108,  4178,
    4668,  8098,  7530,  3554,  300,   2100,  2411,  4588,  7538,  3610,  692,
    4844,  9330,  3865,  2477,  5050,  10772, 1670,  11690, 8096,  7516,  3456,
    11903, 9587,  5664,  2781,  7178,  1090,  7630,  4254,  5200,  11822, 9020,
    1695,  11865, 9321,  3802,  2036,  1963,  1452,  10164, 9703,  6476,  8465,
    10099, 9248,  3291,  10748, 1502,  10514, 12153, 11337, 5625,  2508,  5267,
    2,     14,    98,    686,   4802,  9036,  1807,  360,   2520,  5351,  590,
    4130,  4332,  5746,  3355,  11196, 4638,  7888,  6060,  5553,  2004,  1739,
    12173, 11477, 6605,  9368,  4131,  4339,  5795,  3698,  1308,  9156,  2647,
    6240,  6813,  10824, 2034,  1949,  1354,  9478,  4901,  9729,  6658,  9739,
    6728,  10229, 10158, 9661,  6182,  6407,  7982,  6718,  10159, 9668,  6231,
    6750,  10383, 11236, 4918,  9848,  7491,  3281,  10678, 1012,  7084,  432,
    3024,  8879,  708,   4956,  10114, 9353,  4026,  3604,  650,   4550,  7272,
    1748,  12236, 11918, 9692,  6399,  7926,  6326,  7415,  2749,  6954,  11811,
    8943,  1156,  8092,  7488,  3260,  10531, 12272, 12170, 11456, 6458,  8339,
    9217,  3074,  9229,  3158,  9817,  7274,  1762,  45,    315,   2205,  3146,
    9733,  6686,  9935,  8100,  7544,  3652,  986,   6902,  11447, 6395,  7898,
    6130,  6043,  5434,  1171,  8197,  8223,  8405,  9679,  6308,  7289,  1867,
    780,   5460,  1353,  9471,  4852,  9386,  4257,  5221,  11969, 10049, 8898,
    841,   5887,  4342,  5816,  3845,  2337,  4070,  3912,  2806,  7353,  2315,
    3916,  2834,  7549,  3687,  1231,  8617,  11163, 4407,  6271,  7030,  54,
    378,   2646,  6233,  6764,  10481, 11922, 9720,  6595,  9298,  3641,  909,
    6363,  7674,  4562,  7356,  2336,  4063,  3863,  2463,  4952,  10086, 9157,
    2654,  6289,  7156,  936,   6552,  8997,  1534,  10738, 1432,  10024, 8723,
    11905, 9601,  5762,  3467,  11980, 10126, 9437,  4614,  7720,  4884,  9610,
    5825,  3908,  2778,  7157,  943,   6601,  9340,  3935,  2967,  8480,  10204,
    9983,  8436,  9896,  7827,  5633,  2564,  5659,  2746,  6933,  11664, 7914,
    6242,  6827,  10922, 2720,  6751,  10390, 11285, 5261,  12249, 12009, 10329,
    10858, 2272,  3615,  727,   5089,  11045, 3581,  489,   3423,  11672, 7970,
    6634,  9571,  5552,  1997,  1690,  11830, 9076,  2087,  2320,  3951,  3079,
    9264,  3403,  11532, 6990,  12063, 10707, 1215,  8505,  10379, 11208, 4722,
    8476,  10176, 9787,  7064,  292,   2044,  2019,  1844,  619,   4333,  5753,
    3404,  11539, 7039,  117,   819,   5733,  3264,  10559, 179,   1253,  8771,
    12241, 11953, 9937,  8114,  7642,  4338,  5788,  3649,  965,   6755,  10418,
    11481, 6633,  9564,  5503,  1654,  11578, 7312,  2028,  1907,  1060,  7420,
    2784,  7199,  1237,  8659,  11457, 6465,  8388,  9560,  5475,  1458,  10206,
    9997,  8534,  10582, 340,   2380,  4371,  6019,  5266,  12284, 12254, 12044,
    10574, 284,   1988,  1627,  11389, 5989,  5056,  10814, 1964,  1459,  10213,
    10046, 8877,  694,   4858,  9428,  4551,  7279,  1797,  290,   2030,  1921,
    1158,  8106,  7586,  3946,  3044,  9019,  1688,  11816, 8978,  1401,  9807,
    7204,  1272,  8904,  883,   6181,  6400,  7933,  6375,  7758,  5150,  11472,
    6570,  9123,  2416,  4623,  7783,  5325,  408,   2856,  7703,  4765,  8777,
    12283, 12247, 11995, 10231, 10172, 9759,  6868,  11209, 4729,  8525,  10519,
    12188, 11582, 7340,  2224,  3279,  10664, 914,   6398,  7919,  6277,  7072,
    348,   2436,  4763,  8763,  12185, 11561, 7193,  1195,  8365,  9399,  4348,
    5858,  4139,  4395,  6187,  6442,  8227,  8433,  9875,  7680,  4604,  7650,
    4394,  6180,  6393,  7884,  6032,  5357,  632,   4424,  6390,  7863,  5885,
    4328,  5718,  3159,  9824,  7323,  2105,  2446,  4833,  9253,  3326,  10993,
    3217,  10230, 10165, 9710,  6525,  8808,  211,   1477,  10339, 10928, 2762,
    7045,  159,   1113,  7791,  5381,  800,   5600,  2333,  4042,  3716,  1434,
    10038, 8821,  302,   2114,  2509,  5274,  51,    357,   2499,  5204,  11850,
    9216,  3067,  9180,  2815,  7416,  2756,  7003,  12154, 11344, 5674,  2851,
    7668,  4520,  7062,  278,   1946,  1333,  9331,  3872,  2526,  5393,  884,
    6188,  6449,  8276,  8776,  12276, 12198, 11652, 7830,  5654,  2711,  6688,
    9949,  8198,  8230,  8454,  10022, 8709,  11807, 8915,  960,   6720,  10173,
    9766,  6917,  11552, 7130,  754,   5278,  79,    553,   3871,  2519,  5344,
    541,   3787,  1931,  1228,  8596,  11016, 3378,  11357, 5765,  3488,  12127,
    11155, 4351,  5879,  4286,  5424,  1101,  7707,  4793,  8973,  1366,  9562,
    5489,  1556,  10892, 2510,  5281,  100,   700,   4900,  9722,  6609,  9396,
    4327,  5711,  3110,  9481,  4922,  9876,  7687,  4653,  7993,  6795,  10698,
    1152,  8064,  7292,  1888,  927,   6489,  8556,  10736, 1418,  9926,  8037,
    7103,  565,   3955,  3107,  9460,  4775,  8847,  484,   3388,  11427, 6255,
    6918,  11559, 7179,  1097,  7679,  4597,  7601,  4051,  3779,  1875,  836,
    5852,  4097,  4101,  4129,  4325,  5697,  3012,  8795,  120,   840,   5880,
    4293,  5473,  1444,  10108, 9311,  3732,  1546,  10822, 2020,  1851,  668,
    4676,  8154,  7922,  6298,  7219,  1377,  9639,  6028,  5329,  436,   3052,
    9075,  2080,  2271,  3608,  678,   4746,  8644,  11352, 5730,  3243,  10412,
    11439, 6339,  7506,  3386,  11413, 6157,  6232,  6757,  10432, 11579, 7319,
    2077,  2250,  3461,  11938, 9832,  7379,  2497,  5190,  11752, 8530,  10554,
    144,   1008,  7056,  236,   1652,  11564, 7214,  1342,  9394,  4313,  5613,
    2424,  4679,  8175,  8069,  7327,  2133,  2642,  6205,  6568,  9109,  2318,
    3937,  2981,  8578,  10890, 2496,  5183,  11703, 8187,  8153,  7915,  6249,
    6876,  11265, 5121,  11269, 5149,  11465, 6521,  8780,  15,    105,   735,
    5145,  11437, 6325,  7408,  2700,  6611,  9410,  4425,  6397,  7912,  6228,
    6729,  10236, 10207, 10004, 8583,  10925, 2741,  6898,  11419, 6199,  6526,
    8815,  260,   1820,  451,   3157,  9810,  7225,  1419,  9933,  8086,  7446,
    2966,  8473,  10155, 9640,  6035,  5378,  779,   5453,  1304,  9128,  2451,
    4868,  9498,  5041,  10709, 1229,  8603,  11065, 3721,  1469,  10283, 10536,
    18,    126,   882,   6174,  6351,  7590,  3974,  3240,  10391, 11292, 5310,
    303,   2121,  2558,  5617,  2452,  4875,  9547,  5384,  821,   5747,  3362,
    11245, 4981,  10289, 10578, 312,   2184,  2999,  8704,  11772, 8670,  11534,
    7004,  12161, 11393, 6017,  5252,  12186, 11568, 7242,  1538,  10766, 1628,
    11396, 6038,  5399,  926,   6482,  8507,  10393, 11306, 5408,  989,   6923,
    11594, 7424,  2812,  7395,  2609,  5974,  4951,  10079, 9108,  2311,  3888,
    2638,  6177,  6372,  7737,  5003,  10443, 11656, 7858,  5850,  4083,  4003,
    3443,  11812, 8950,  1205,  8435,  9889,  7778,  5290,  163,   1141,  7987,
    6753,  10404, 11383, 5947,  4762,  8756,  12136, 11218, 4792,  8966,  1317,
    9219,  3088,  9327,  3844,  2330,  4021,  3569,  405,   2835,  7556,  3736,
    1574,  11018, 3392,  11455, 6451,  8290,  8874,  673,   4711,  8399,  9637,
    6014,  5231,  12039, 10539, 39,    273,   1911,  1088,  7616,  4156,  4514,
    7020,  12273, 12177, 11505, 6801,  10740, 1446,  10122, 9409,  4418,  6348,
    7569,  3827,  2211,  3188,  10027, 8744,  12052, 10630, 676,   4732,  8546,
    10666, 928,   6496,  8605,  11079, 3819,  2155,  2796,  7283,  1825,  486,
    3402,  11525, 6941,  11720, 8306,  8986,  1457,  10199, 9948,  8191,  8181,
    8111,  7621,  4191,  4759,  8735,  11989, 10189, 9878,  7701,  4751,  8679,
    11597, 7445,  2959,  8424,  9812,  7239,  1517,  10619, 599,   4193,  4773,
    8833,  386,   2702,  6625,  9508,  5111,  11199, 4659,  8035,  7089,  467,
    3269,  10594, 424,   2968,  8487,  10253, 10326, 10837, 2125,  2586,  5813,
    3824,  2190,  3041,  8998,  1541,  10787, 1775,  136,   952,   6664,  9781,
    7022,  12287, 12275, 12191, 11603, 7487,  3253,  10482, 11929, 9769,  6938,
    11699, 8159,  7957,  6543,  8934,  1093,  7651,  4401,  6229,  6736,  10285,
    10550, 116,   812,   5684,  2921,  8158,  7950,  6494,  8591,  10981, 3133,
    9642,  6049,  5476,  1465,  10255, 10340, 10935, 2811,  7388,  2560,  5631,
    2550,  5561,  2060,  2131,  2628,  6107,  5882,  4307,  5571,  2130,  2621,
    6058,  5539,  1906,  1053,  7371,  2441,  4798,  9008,  1611,  11277, 5205,
    11857, 9265,  3410,  11581, 7333,  2175,  2936,  8263,  8685,  11639, 7739,
    5017,  10541, 53,    371,   2597,  5890,  4363,  5963,  4874,  9540,  5335,
    478,   3346,  11133, 4197,  4801,  9029,  1758,  17,    119,   833,   5831,
    3950,  3072,  9215,  3060,  9131,  2472,  5015,  10527, 12244, 11974, 10084,
    9143,  2556,  5603,  2354,  4189,  4745,  8637,  11303, 5387,  842,   5894,
    4391,  6159,  6246,  6855,  11118, 4092,  4066,  3884,  2610,  5981,  5000,
    10422, 11509, 6829,  10936, 2818,  7437,  2903,  8032,  7068,  320,   2240,
    3391,  11448, 6402,  7947,  6473,  8444,  9952,  8219,  8377,  9483,  4936,
    9974,  8373,  9455,  4740,  8602,  11058, 3672,  1126,  7882,  6018,  5259,
    12235, 11911, 9643,  6056,  5525,  1808,  367,   2569,  5694,  2991,  8648,
    11380, 5926,  4615,  7727,  4933,  9953,  8226,  8426,  9826,  7337,  2203,
    3132,  9635,  6000,  5133,  11353, 5737,  3292,  10755, 1551,  10857, 2265,
    3566,  384,   2688,  6527,  8822,  309,   2163,  2852,  7675,  4569,  7405,
    2679,  6464,  8381,  9511,  5132,  11346, 5688,  2949,  8354,  9322,  3809,
    2085,  2306,  3853,  2393,  4462,  6656,  9725,  6630,  9543,  5356,  625,
    4375,  6047,  5462,  1367,  9569,  5538,  1899,  1004,  7028,  40,    280,
    1960,  1431,  10017, 8674,  11562, 7200,  1244,  8708,  11800, 8866,  617,
    4319,  5655,  2718,  6737,  10292, 10599, 459,   3213,  10202, 9969,  8338,
    9210,  3025,  8886,  757,   5299,  226,   1582,  11074, 3784,  1910,  1081,
    7567,  3813,  2113,  2502,  5225,  11997, 10245, 10270, 10445, 11670, 7956,
    6536,  8885,  750,   5250,  12172, 11470, 6556,  9025,  1730,  12110, 11036,
    3518,  48,    336,   2352,  4175,  4647,  7951,  6501,  8640,  11324, 5534,
    1871,  808,   5656,  2725,  6786,  10635, 711,   4977,  10261, 10382, 11229,
    4869,  9505,  5090,  11052, 3630,  832,   5824,  3901,  2729,  6814,  10831,
    2083,  2292,  3755,  1707,  11949, 9909,  7918,  6270,  7023,  5,     35,
    245,   1715,  12005, 10301, 10662, 900,   6300,  7233,  1475,  10325, 10830,
    2076,  2243,  3412,  11595, 7431,  2861,  7738,  5010,  10492, 11999, 10259,
    10368, 11131, 4183,  4703,  8343,  9245,  3270,  10601, 473,   3311,  10888,
    2482,  5085,  11017, 3385,  11406, 6108,  5889,  4356,  5914,  4531,  7139,
    817,   5719,  3166,  9873,  7666,  4506,  6964,  11881, 9433,  4586,  7524,
    3512,  6,     42,    294,   2058,  2117,  2530,  5421,  1080,  7560,  3764,
    1770,  101,   707,   4949,  10065, 9010,  1625,  11375, 5891,  4370,  6012,
    5217,  11941, 9853,  7526,  3526,  104,   728,   5096,  11094, 3924,  2890,
    7941,  6431,  8150,  7894,  6102,  5847,  4062,  3856,  2414,  4609,  7685,
    4639,  7895,  6109,  5896,  4405,  6257,  6932,  11657, 7865,  5899,  4426,
    6404,  7961,  6571,  9130,  2465,  4966,  10184, 9843,  7456,  3036,  8963,
    1296,  9072,  2059,  2124,  2579,  5764,  3481,  12078, 10812, 1950,  1361,
    9527,  5244,  12130, 11176, 4498,  6908,  11489, 6689,  9956,  8247,  8573,
    10855, 2251,  3468,  11987, 10175, 9780,  7015,  12238, 11932, 9790,  7085,
    439,   3073,  9222,  3109,  9474,  4873,  9533,  5286,  135,   945,   6615,
    9438,  4621,  7769,  5227,  12011, 10343, 10956, 2958,  8417,  9763,  6896,
    11405, 6101,  5840,  4013,  3513,  13,    91,    637,   4459,  6635,  9578,
    5601,  2340,  4091,
};
#else
static poly_coeff_t poly_gamma_exp[2 * MAM2_POLY_N + 1] = {
    1,     7,     49,    343,   2401,  4518,  -5241, 180,   1260,  -3469, 295,
    2065,  2166,  2873,  -4467, 5598,  2319,  3944,  3030,  -3368, 1002,  -5275,
    -58,   -406,  -2842, 4684,  -4079, -3975, -3247, 1849,  654,   4578,  -4821,
    3120,  -2738, 5412,  1017,  -5170, 677,   4739,  -3694, -1280, 3329,  -1275,
    3364,  -1030, 5079,  -1314, 3091,  -2941, 3991,  3359,  -1065, 4834,  -3029,
    3375,  -953,  5618,  2459,  4924,  -2399, -4504, 5339,  506,   3542,  216,
    1512,  -1705, 354,   2478,  5057,  -1468, 2013,  1802,  325,   2275,  3636,
    874,   6118,  5959,  4846,  -2945, 3963,  3163,  -2437, -4770, 3477,  -239,
    -1673, 578,   4046,  3744,  1630,  -879,  6136,  6085,  5728,  3229,  -1975,
    -1536, 1537,  -1530, 1579,  -1236, 3637,  881,   -6122, -5987, -5042, 1573,
    -1278, 3343,  -1177, 4050,  3772,  1826,  493,   3451,  -421,  -2947, 3949,
    3065,  -3123, 2717,  -5559, -2046, -2033, -1942, -1305, 3154,  -2500, -5211,
    390,   2730,  -5468, -1409, 2426,  4693,  -4016, -3534, -160,  -1120, 4449,
    -5724, -3201, 2171,  2908,  -4222, -4976, 2035,  1956,  1403,  -2468, -4987,
    1958,  1417,  -2370, -4301, -5529, -1836, -563,  -3941, -3009, 3515,  27,
    189,   1323,  -3028, 3382,  -904,  5961,  4860,  -2847, 4649,  -4324, -5690,
    -2963, 3837,  2281,  3678,  1168,  -4113, -4213, -4913, 2476,  5043,  -1566,
    1327,  -3000, 3578,  468,   3276,  -1646, 767,   5369,  716,   5012,  -1783,
    -192,  -1344, 2881,  -4411, 5990,  5063,  -1426, 2307,  3860,  2442,  4805,
    -3232, 1954,  1389,  -2566, -5673, -2844, 4670,  -4177, -4661, 4240,  5102,
    -1153, 4218,  4948,  -2231, -3328, 1282,  -3315, 1373,  -2678, 5832,  3957,
    3121,  -2731, 5461,  1360,  -2769, 5195,  -502,  -3514, -20,   -140,  -980,
    5429,  1136,  -4337, -5781, -3600, -622,  -4354, -5900, -4433, 5836,  3985,
    3317,  -1359, 2776,  -5146, 845,   5915,  4538,  -5101, 1160,  -4169, -4605,
    4632,  -4443, 5766,  3495,  -113,  -791,  -5537, -1892, -955,  5604,  2361,
    4238,  5088,  -1251, 3532,  146,   1022,  -5135, 922,   -5835, -3978, -3268,
    1702,  -375,  -2625, -6086, -5735, -3278, 1632,  -865,  -6055, -5518, -1759,
    -24,   -168,  -1176, 4057,  3821,  2169,  2894,  -4320, -5662, -2767, 5209,
    -404,  -2828, 4782,  -3393, 827,   5789,  3656,  1014,  -5191, 530,   3710,
    1392,  -2545, -5526, -1815, -416,  -2912, 4194,  4780,  -3407, 729,   5103,
    -1146, 4267,  5291,  170,   1190,  -3959, -3135, 2633,  6142,  6127,  6022,
    5287,  142,   994,   -5331, -450,  -3150, 2528,  5407,  982,   -5415, -1038,
    5023,  -1706, 347,   2429,  4714,  -3869, -2505, -5246, 145,   1015,  -5184,
    579,   4053,  3793,  1973,  1522,  -1635, 844,   5908,  4489,  -5444, -1241,
    3602,  636,   4452,  -5703, -3054, 3200,  -2178, -2957, 3879,  2575,  5736,
    3285,  -1583, 1208,  -3833, -2253, -3482, 204,   1428,  -2293, -3762, -1756,
    -3,    -21,   -147,  -1029, 5086,  -1265, 3434,  -540,  -3780, -1882, -885,
    6094,  5791,  3670,  1112,  -4505, 5332,  457,   3199,  -2185, -3006, 3536,
    174,   1218,  -3763, -1763, -52,   -364,  -2548, -5547, -1962, -1445, 2174,
    2929,  -4075, -3947, -3051, 3221,  -2031, -1928, -1207, 3840,  2302,  3825,
    2197,  3090,  -2948, 3942,  3016,  -3466, 316,   2212,  3195,  -2213, -3202,
    2164,  2859,  -4565, 4912,  -2483, -5092, 1223,  -3728, -1518, 1663,  -648,
    -4536, 5115,  -1062, 4855,  -2882, 4404,  -6039, -5406, -975,  5464,  1381,
    -2622, -6065, -5588, -2249, -3454, 400,   2800,  -4978, 2021,  1858,  717,
    5019,  -1734, 151,   1057,  -4890, 2637,  -6119, -5966, -4895, 2602,  5925,
    4608,  -4611, 4590,  -4737, 3708,  1378,  -2643, 6077,  5672,  2837,  -4719,
    3834,  2260,  3531,  139,   973,   -5478, -1479, 1936,  1263,  -3448, 442,
    3094,  -2920, 4138,  4388,  6138,  6099,  5826,  3915,  2827,  -4789, 3344,
    -1170, 4099,  4115,  4227,  5011,  -1790, -241,  -1687, 480,   3360,  -1058,
    4883,  -2686, 5776,  3565,  377,   2639,  -6105, -5868, -4209, -4885, 2672,
    -5874, -4251, -5179, 614,   4298,  5508,  1689,  -466,  -3262, 1744,  -81,
    -567,  -3969, -3205, 2143,  2712,  -5594, -2291, -3748, -1658, 683,   4781,
    -3400, 778,   5446,  1255,  -3504, 50,    350,   2450,  4861,  -2840, 4698,
    -3981, -3289, 1555,  -1404, 2461,  4938,  -2301, -3818, -2148, -2747, 5349,
    576,   4032,  3646,  944,   -5681, -2900, 4278,  5368,  709,   4963,  -2126,
    -2593, -5862, -4167, -4591, 4730,  -3757, -1721, 242,   1694,  -431,  -3017,
    3459,  -365,  -2555, -5596, -2305, -3846, -2344, -4119, -4255, -5207, 418,
    2926,  -4096, -4094, -4080, -3982, -3296, 1506,  -1747, 60,    420,   2940,
    -3998, -3408, 722,   5054,  -1489, 1866,  773,   5411,  1010,  -5219, 334,
    2338,  4077,  3961,  3149,  -2535, -5456, -1325, 3014,  -3480, 218,   1526,
    -1607, 1040,  -5009, 1804,  339,   2373,  4322,  5676,  2865,  -4523, 5206,
    -425,  -2975, 3753,  1693,  -438,  -3066, 3116,  -2766, 5216,  -355,  -2485,
    -5106, 1125,  -4414, 5969,  4916,  -2455, -4896, 2595,  5876,  4265,  5277,
    72,    504,   3528,  118,   826,   5782,  3607,  671,   4697,  -3988, -3338,
    1212,  -3805, -2057, -2110, -2481, -5078, 1321,  -3042, 3284,  -1590, 1159,
    -4176, -4654, 4289,  5445,  1248,  -3553, -293,  -2051, -2068, -2187, -3020,
    3438,  -512,  -3584, -510,  -3570, -412,  -2884, 4390,  -6137, -6092, -5777,
    -3572, -426,  -2982, 3704,  1350,  -2839, 4705,  -3932, -2946, 3956,  3114,
    -2780, 5118,  -1041, 5002,  -1853, -682,  -4774, 3449,  -435,  -3045, 3263,
    -1737, 130,   910,   -5919, -4566, 4905,  -2532, -5435, -1178, 4043,  3723,
    1483,  -1908, -1067, 4820,  -3127, 2689,  -5755, -3418, 652,   4564,  -4919,
    2434,  4749,  -3624, -790,  -5530, -1843, -612,  -4284, -5410, -1003, 5268,
    9,     63,    441,   3087,  -2969, 3795,  1987,  1620,  -949,  5646,  2655,
    -5993, -5084, 1279,  -3336, 1226,  -3707, -1371, 2692,  -5734, -3271, 1681,
    -522,  -3654, -1000, 5289,  156,   1092,  -4645, 4352,  5886,  4335,  5767,
    3502,  -64,   -448,  -3136, 2626,  6093,  5784,  3621,  769,   5383,  814,
    5698,  3019,  -3445, 463,   3241,  -1891, -948,  5653,  2704,  -5650, -2683,
    5797,  3712,  1406,  -2447, -4840, 2987,  -3669, -1105, 4554,  -4989, 1944,
    1319,  -3056, 3186,  -2276, -3643, -923,  5828,  3929,  2925,  -4103, -4143,
    -4423, 5906,  4475,  -5542, -1927, -1200, 3889,  2645,  -6063, -5574, -2151,
    -2768, 5202,  -453,  -3171, 2381,  4378,  6068,  5609,  2396,  4483,  -5486,
    -1535, 1544,  -1481, 1922,  1165,  -4134, -4360, -5942, -4727, 3778,  1868,
    787,   5509,  1696,  -417,  -2919, 4145,  4437,  -5808, -3789, -1945, -1326,
    3007,  -3529, -125,  -875,  -6125, -6008, -5189, 544,   3808,  2078,  2257,
    3510,  -8,    -56,   -392,  -2744, 5370,  723,   5061,  -1440, 2209,  3174,
    -2360, -4231, -5039, 1594,  -1131, 4372,  6026,  5315,  338,   2366,  4273,
    5333,  464,   3248,  -1842, -605,  -4235, -5067, 1398,  -2503, -5232, 243,
    1701,  -382,  -2674, 5860,  4153,  4493,  -5416, -1045, 4974,  -2049, -2054,
    -2089, -2334, -4049, -3765, -1777, -150,  -1050, 4939,  -2294, -3769, -1805,
    -346,  -2422, -4665, 4212,  4906,  -2525, -5386, -835,  -5845, -4048, -3758,
    -1728, 193,   1351,  -2832, 4754,  -3589, -545,  -3815, -2127, -2600, -5911,
    -4510, 5297,  212,   1484,  -1901, -1018, 5163,  -726,  -5082, 1293,  -3238,
    1912,  1095,  -4624, 4499,  -5374, -751,  -5257, 68,    476,   3332,  -1254,
    3511,  -1,    -7,    -49,   -343,  -2401, -4518, 5241,  -180,  -1260, 3469,
    -295,  -2065, -2166, -2873, 4467,  -5598, -2319, -3944, -3030, 3368,  -1002,
    5275,  58,    406,   2842,  -4684, 4079,  3975,  3247,  -1849, -654,  -4578,
    4821,  -3120, 2738,  -5412, -1017, 5170,  -677,  -4739, 3694,  1280,  -3329,
    1275,  -3364, 1030,  -5079, 1314,  -3091, 2941,  -3991, -3359, 1065,  -4834,
    3029,  -3375, 953,   -5618, -2459, -4924, 2399,  4504,  -5339, -506,  -3542,
    -216,  -1512, 1705,  -354,  -2478, -5057, 1468,  -2013, -1802, -325,  -2275,
    -3636, -874,  -6118, -5959, -4846, 2945,  -3963, -3163, 2437,  4770,  -3477,
    239,   1673,  -578,  -4046, -3744, -1630, 879,   -6136, -6085, -5728, -3229,
    1975,  1536,  -1537, 1530,  -1579, 1236,  -3637, -881,  6122,  5987,  5042,
    -1573, 1278,  -3343, 1177,  -4050, -3772, -1826, -493,  -3451, 421,   2947,
    -3949, -3065, 3123,  -2717, 5559,  2046,  2033,  1942,  1305,  -3154, 2500,
    5211,  -390,  -2730, 5468,  1409,  -2426, -4693, 4016,  3534,  160,   1120,
    -4449, 5724,  3201,  -2171, -2908, 4222,  4976,  -2035, -1956, -1403, 2468,
    4987,  -1958, -1417, 2370,  4301,  5529,  1836,  563,   3941,  3009,  -3515,
    -27,   -189,  -1323, 3028,  -3382, 904,   -5961, -4860, 2847,  -4649, 4324,
    5690,  2963,  -3837, -2281, -3678, -1168, 4113,  4213,  4913,  -2476, -5043,
    1566,  -1327, 3000,  -3578, -468,  -3276, 1646,  -767,  -5369, -716,  -5012,
    1783,  192,   1344,  -2881, 4411,  -5990, -5063, 1426,  -2307, -3860, -2442,
    -4805, 3232,  -1954, -1389, 2566,  5673,  2844,  -4670, 4177,  4661,  -4240,
    -5102, 1153,  -4218, -4948, 2231,  3328,  -1282, 3315,  -1373, 2678,  -5832,
    -3957, -3121, 2731,  -5461, -1360, 2769,  -5195, 502,   3514,  20,    140,
    980,   -5429, -1136, 4337,  5781,  3600,  622,   4354,  5900,  4433,  -5836,
    -3985, -3317, 1359,  -2776, 5146,  -845,  -5915, -4538, 5101,  -1160, 4169,
    4605,  -4632, 4443,  -5766, -3495, 113,   791,   5537,  1892,  955,   -5604,
    -2361, -4238, -5088, 1251,  -3532, -146,  -1022, 5135,  -922,  5835,  3978,
    3268,  -1702, 375,   2625,  6086,  5735,  3278,  -1632, 865,   6055,  5518,
    1759,  24,    168,   1176,  -4057, -3821, -2169, -2894, 4320,  5662,  2767,
    -5209, 404,   2828,  -4782, 3393,  -827,  -5789, -3656, -1014, 5191,  -530,
    -3710, -1392, 2545,  5526,  1815,  416,   2912,  -4194, -4780, 3407,  -729,
    -5103, 1146,  -4267, -5291, -170,  -1190, 3959,  3135,  -2633, -6142, -6127,
    -6022, -5287, -142,  -994,  5331,  450,   3150,  -2528, -5407, -982,  5415,
    1038,  -5023, 1706,  -347,  -2429, -4714, 3869,  2505,  5246,  -145,  -1015,
    5184,  -579,  -4053, -3793, -1973, -1522, 1635,  -844,  -5908, -4489, 5444,
    1241,  -3602, -636,  -4452, 5703,  3054,  -3200, 2178,  2957,  -3879, -2575,
    -5736, -3285, 1583,  -1208, 3833,  2253,  3482,  -204,  -1428, 2293,  3762,
    1756,  3,     21,    147,   1029,  -5086, 1265,  -3434, 540,   3780,  1882,
    885,   -6094, -5791, -3670, -1112, 4505,  -5332, -457,  -3199, 2185,  3006,
    -3536, -174,  -1218, 3763,  1763,  52,    364,   2548,  5547,  1962,  1445,
    -2174, -2929, 4075,  3947,  3051,  -3221, 2031,  1928,  1207,  -3840, -2302,
    -3825, -2197, -3090, 2948,  -3942, -3016, 3466,  -316,  -2212, -3195, 2213,
    3202,  -2164, -2859, 4565,  -4912, 2483,  5092,  -1223, 3728,  1518,  -1663,
    648,   4536,  -5115, 1062,  -4855, 2882,  -4404, 6039,  5406,  975,   -5464,
    -1381, 2622,  6065,  5588,  2249,  3454,  -400,  -2800, 4978,  -2021, -1858,
    -717,  -5019, 1734,  -151,  -1057, 4890,  -2637, 6119,  5966,  4895,  -2602,
    -5925, -4608, 4611,  -4590, 4737,  -3708, -1378, 2643,  -6077, -5672, -2837,
    4719,  -3834, -2260, -3531, -139,  -973,  5478,  1479,  -1936, -1263, 3448,
    -442,  -3094, 2920,  -4138, -4388, -6138, -6099, -5826, -3915, -2827, 4789,
    -3344, 1170,  -4099, -4115, -4227, -5011, 1790,  241,   1687,  -480,  -3360,
    1058,  -4883, 2686,  -5776, -3565, -377,  -2639, 6105,  5868,  4209,  4885,
    -2672, 5874,  4251,  5179,  -614,  -4298, -5508, -1689, 466,   3262,  -1744,
    81,    567,   3969,  3205,  -2143, -2712, 5594,  2291,  3748,  1658,  -683,
    -4781, 3400,  -778,  -5446, -1255, 3504,  -50,   -350,  -2450, -4861, 2840,
    -4698, 3981,  3289,  -1555, 1404,  -2461, -4938, 2301,  3818,  2148,  2747,
    -5349, -576,  -4032, -3646, -944,  5681,  2900,  -4278, -5368, -709,  -4963,
    2126,  2593,  5862,  4167,  4591,  -4730, 3757,  1721,  -242,  -1694, 431,
    3017,  -3459, 365,   2555,  5596,  2305,  3846,  2344,  4119,  4255,  5207,
    -418,  -2926, 4096,  4094,  4080,  3982,  3296,  -1506, 1747,  -60,   -420,
    -2940, 3998,  3408,  -722,  -5054, 1489,  -1866, -773,  -5411, -1010, 5219,
    -334,  -2338, -4077, -3961, -3149, 2535,  5456,  1325,  -3014, 3480,  -218,
    -1526, 1607,  -1040, 5009,  -1804, -339,  -2373, -4322, -5676, -2865, 4523,
    -5206, 425,   2975,  -3753, -1693, 438,   3066,  -3116, 2766,  -5216, 355,
    2485,  5106,  -1125, 4414,  -5969, -4916, 2455,  4896,  -2595, -5876, -4265,
    -5277, -72,   -504,  -3528, -118,  -826,  -5782, -3607, -671,  -4697, 3988,
    3338,  -1212, 3805,  2057,  2110,  2481,  5078,  -1321, 3042,  -3284, 1590,
    -1159, 4176,  4654,  -4289, -5445, -1248, 3553,  293,   2051,  2068,  2187,
    3020,  -3438, 512,   3584,  510,   3570,  412,   2884,  -4390, 6137,  6092,
    5777,  3572,  426,   2982,  -3704, -1350, 2839,  -4705, 3932,  2946,  -3956,
    -3114, 2780,  -5118, 1041,  -5002, 1853,  682,   4774,  -3449, 435,   3045,
    -3263, 1737,  -130,  -910,  5919,  4566,  -4905, 2532,  5435,  1178,  -4043,
    -3723, -1483, 1908,  1067,  -4820, 3127,  -2689, 5755,  3418,  -652,  -4564,
    4919,  -2434, -4749, 3624,  790,   5530,  1843,  612,   4284,  5410,  1003,
    -5268, -9,    -63,   -441,  -3087, 2969,  -3795, -1987, -1620, 949,   -5646,
    -2655, 5993,  5084,  -1279, 3336,  -1226, 3707,  1371,  -2692, 5734,  3271,
    -1681, 522,   3654,  1000,  -5289, -156,  -1092, 4645,  -4352, -5886, -4335,
    -5767, -3502, 64,    448,   3136,  -2626, -6093, -5784, -3621, -769,  -5383,
    -814,  -5698, -3019, 3445,  -463,  -3241, 1891,  948,   -5653, -2704, 5650,
    2683,  -5797, -3712, -1406, 2447,  4840,  -2987, 3669,  1105,  -4554, 4989,
    -1944, -1319, 3056,  -3186, 2276,  3643,  923,   -5828, -3929, -2925, 4103,
    4143,  4423,  -5906, -4475, 5542,  1927,  1200,  -3889, -2645, 6063,  5574,
    2151,  2768,  -5202, 453,   3171,  -2381, -4378, -6068, -5609, -2396, -4483,
    5486,  1535,  -1544, 1481,  -1922, -1165, 4134,  4360,  5942,  4727,  -3778,
    -1868, -787,  -5509, -1696, 417,   2919,  -4145, -4437, 5808,  3789,  1945,
    1326,  -3007, 3529,  125,   875,   6125,  6008,  5189,  -544,  -3808, -2078,
    -2257, -3510, 8,     56,    392,   2744,  -5370, -723,  -5061, 1440,  -2209,
    -3174, 2360,  4231,  5039,  -1594, 1131,  -4372, -6026, -5315, -338,  -2366,
    -4273, -5333, -464,  -3248, 1842,  605,   4235,  5067,  -1398, 2503,  5232,
    -243,  -1701, 382,   2674,  -5860, -4153, -4493, 5416,  1045,  -4974, 2049,
    2054,  2089,  2334,  4049,  3765,  1777,  150,   1050,  -4939, 2294,  3769,
    1805,  346,   2422,  4665,  -4212, -4906, 2525,  5386,  835,   5845,  4048,
    3758,  1728,  -193,  -1351, 2832,  -4754, 3589,  545,   3815,  2127,  2600,
    5911,  4510,  -5297, -212,  -1484, 1901,  1018,  -5163, 726,   5082,  -1293,
    3238,  -1912, -1095, 4624,  -4499, 5374,  751,   5257,  -68,   -476,  -3332,
    1254,  -3511, 1,
};
#endif

// (b₀,b₁,…,bₙ₋₁) → (bₙ₋₁,…,b₁,b₀)
static size_t poly_idx_rev[MAM2_POLY_N] = {
    0x000, 0x200, 0x100, 0x300, 0x080, 0x280, 0x180, 0x380, 0x040, 0x240, 0x140,
    0x340, 0x0c0, 0x2c0, 0x1c0, 0x3c0, 0x020, 0x220, 0x120, 0x320, 0x0a0, 0x2a0,
    0x1a0, 0x3a0, 0x060, 0x260, 0x160, 0x360, 0x0e0, 0x2e0, 0x1e0, 0x3e0, 0x010,
    0x210, 0x110, 0x310, 0x090, 0x290, 0x190, 0x390, 0x050, 0x250, 0x150, 0x350,
    0x0d0, 0x2d0, 0x1d0, 0x3d0, 0x030, 0x230, 0x130, 0x330, 0x0b0, 0x2b0, 0x1b0,
    0x3b0, 0x070, 0x270, 0x170, 0x370, 0x0f0, 0x2f0, 0x1f0, 0x3f0, 0x008, 0x208,
    0x108, 0x308, 0x088, 0x288, 0x188, 0x388, 0x048, 0x248, 0x148, 0x348, 0x0c8,
    0x2c8, 0x1c8, 0x3c8, 0x028, 0x228, 0x128, 0x328, 0x0a8, 0x2a8, 0x1a8, 0x3a8,
    0x068, 0x268, 0x168, 0x368, 0x0e8, 0x2e8, 0x1e8, 0x3e8, 0x018, 0x218, 0x118,
    0x318, 0x098, 0x298, 0x198, 0x398, 0x058, 0x258, 0x158, 0x358, 0x0d8, 0x2d8,
    0x1d8, 0x3d8, 0x038, 0x238, 0x138, 0x338, 0x0b8, 0x2b8, 0x1b8, 0x3b8, 0x078,
    0x278, 0x178, 0x378, 0x0f8, 0x2f8, 0x1f8, 0x3f8, 0x004, 0x204, 0x104, 0x304,
    0x084, 0x284, 0x184, 0x384, 0x044, 0x244, 0x144, 0x344, 0x0c4, 0x2c4, 0x1c4,
    0x3c4, 0x024, 0x224, 0x124, 0x324, 0x0a4, 0x2a4, 0x1a4, 0x3a4, 0x064, 0x264,
    0x164, 0x364, 0x0e4, 0x2e4, 0x1e4, 0x3e4, 0x014, 0x214, 0x114, 0x314, 0x094,
    0x294, 0x194, 0x394, 0x054, 0x254, 0x154, 0x354, 0x0d4, 0x2d4, 0x1d4, 0x3d4,
    0x034, 0x234, 0x134, 0x334, 0x0b4, 0x2b4, 0x1b4, 0x3b4, 0x074, 0x274, 0x174,
    0x374, 0x0f4, 0x2f4, 0x1f4, 0x3f4, 0x00c, 0x20c, 0x10c, 0x30c, 0x08c, 0x28c,
    0x18c, 0x38c, 0x04c, 0x24c, 0x14c, 0x34c, 0x0cc, 0x2cc, 0x1cc, 0x3cc, 0x02c,
    0x22c, 0x12c, 0x32c, 0x0ac, 0x2ac, 0x1ac, 0x3ac, 0x06c, 0x26c, 0x16c, 0x36c,
    0x0ec, 0x2ec, 0x1ec, 0x3ec, 0x01c, 0x21c, 0x11c, 0x31c, 0x09c, 0x29c, 0x19c,
    0x39c, 0x05c, 0x25c, 0x15c, 0x35c, 0x0dc, 0x2dc, 0x1dc, 0x3dc, 0x03c, 0x23c,
    0x13c, 0x33c, 0x0bc, 0x2bc, 0x1bc, 0x3bc, 0x07c, 0x27c, 0x17c, 0x37c, 0x0fc,
    0x2fc, 0x1fc, 0x3fc, 0x002, 0x202, 0x102, 0x302, 0x082, 0x282, 0x182, 0x382,
    0x042, 0x242, 0x142, 0x342, 0x0c2, 0x2c2, 0x1c2, 0x3c2, 0x022, 0x222, 0x122,
    0x322, 0x0a2, 0x2a2, 0x1a2, 0x3a2, 0x062, 0x262, 0x162, 0x362, 0x0e2, 0x2e2,
    0x1e2, 0x3e2, 0x012, 0x212, 0x112, 0x312, 0x092, 0x292, 0x192, 0x392, 0x052,
    0x252, 0x152, 0x352, 0x0d2, 0x2d2, 0x1d2, 0x3d2, 0x032, 0x232, 0x132, 0x332,
    0x0b2, 0x2b2, 0x1b2, 0x3b2, 0x072, 0x272, 0x172, 0x372, 0x0f2, 0x2f2, 0x1f2,
    0x3f2, 0x00a, 0x20a, 0x10a, 0x30a, 0x08a, 0x28a, 0x18a, 0x38a, 0x04a, 0x24a,
    0x14a, 0x34a, 0x0ca, 0x2ca, 0x1ca, 0x3ca, 0x02a, 0x22a, 0x12a, 0x32a, 0x0aa,
    0x2aa, 0x1aa, 0x3aa, 0x06a, 0x26a, 0x16a, 0x36a, 0x0ea, 0x2ea, 0x1ea, 0x3ea,
    0x01a, 0x21a, 0x11a, 0x31a, 0x09a, 0x29a, 0x19a, 0x39a, 0x05a, 0x25a, 0x15a,
    0x35a, 0x0da, 0x2da, 0x1da, 0x3da, 0x03a, 0x23a, 0x13a, 0x33a, 0x0ba, 0x2ba,
    0x1ba, 0x3ba, 0x07a, 0x27a, 0x17a, 0x37a, 0x0fa, 0x2fa, 0x1fa, 0x3fa, 0x006,
    0x206, 0x106, 0x306, 0x086, 0x286, 0x186, 0x386, 0x046, 0x246, 0x146, 0x346,
    0x0c6, 0x2c6, 0x1c6, 0x3c6, 0x026, 0x226, 0x126, 0x326, 0x0a6, 0x2a6, 0x1a6,
    0x3a6, 0x066, 0x266, 0x166, 0x366, 0x0e6, 0x2e6, 0x1e6, 0x3e6, 0x016, 0x216,
    0x116, 0x316, 0x096, 0x296, 0x196, 0x396, 0x056, 0x256, 0x156, 0x356, 0x0d6,
    0x2d6, 0x1d6, 0x3d6, 0x036, 0x236, 0x136, 0x336, 0x0b6, 0x2b6, 0x1b6, 0x3b6,
    0x076, 0x276, 0x176, 0x376, 0x0f6, 0x2f6, 0x1f6, 0x3f6, 0x00e, 0x20e, 0x10e,
    0x30e, 0x08e, 0x28e, 0x18e, 0x38e, 0x04e, 0x24e, 0x14e, 0x34e, 0x0ce, 0x2ce,
    0x1ce, 0x3ce, 0x02e, 0x22e, 0x12e, 0x32e, 0x0ae, 0x2ae, 0x1ae, 0x3ae, 0x06e,
    0x26e, 0x16e, 0x36e, 0x0ee, 0x2ee, 0x1ee, 0x3ee, 0x01e, 0x21e, 0x11e, 0x31e,
    0x09e, 0x29e, 0x19e, 0x39e, 0x05e, 0x25e, 0x15e, 0x35e, 0x0de, 0x2de, 0x1de,
    0x3de, 0x03e, 0x23e, 0x13e, 0x33e, 0x0be, 0x2be, 0x1be, 0x3be, 0x07e, 0x27e,
    0x17e, 0x37e, 0x0fe, 0x2fe, 0x1fe, 0x3fe, 0x001, 0x201, 0x101, 0x301, 0x081,
    0x281, 0x181, 0x381, 0x041, 0x241, 0x141, 0x341, 0x0c1, 0x2c1, 0x1c1, 0x3c1,
    0x021, 0x221, 0x121, 0x321, 0x0a1, 0x2a1, 0x1a1, 0x3a1, 0x061, 0x261, 0x161,
    0x361, 0x0e1, 0x2e1, 0x1e1, 0x3e1, 0x011, 0x211, 0x111, 0x311, 0x091, 0x291,
    0x191, 0x391, 0x051, 0x251, 0x151, 0x351, 0x0d1, 0x2d1, 0x1d1, 0x3d1, 0x031,
    0x231, 0x131, 0x331, 0x0b1, 0x2b1, 0x1b1, 0x3b1, 0x071, 0x271, 0x171, 0x371,
    0x0f1, 0x2f1, 0x1f1, 0x3f1, 0x009, 0x209, 0x109, 0x309, 0x089, 0x289, 0x189,
    0x389, 0x049, 0x249, 0x149, 0x349, 0x0c9, 0x2c9, 0x1c9, 0x3c9, 0x029, 0x229,
    0x129, 0x329, 0x0a9, 0x2a9, 0x1a9, 0x3a9, 0x069, 0x269, 0x169, 0x369, 0x0e9,
    0x2e9, 0x1e9, 0x3e9, 0x019, 0x219, 0x119, 0x319, 0x099, 0x299, 0x199, 0x399,
    0x059, 0x259, 0x159, 0x359, 0x0d9, 0x2d9, 0x1d9, 0x3d9, 0x039, 0x239, 0x139,
    0x339, 0x0b9, 0x2b9, 0x1b9, 0x3b9, 0x079, 0x279, 0x179, 0x379, 0x0f9, 0x2f9,
    0x1f9, 0x3f9, 0x005, 0x205, 0x105, 0x305, 0x085, 0x285, 0x185, 0x385, 0x045,
    0x245, 0x145, 0x345, 0x0c5, 0x2c5, 0x1c5, 0x3c5, 0x025, 0x225, 0x125, 0x325,
    0x0a5, 0x2a5, 0x1a5, 0x3a5, 0x065, 0x265, 0x165, 0x365, 0x0e5, 0x2e5, 0x1e5,
    0x3e5, 0x015, 0x215, 0x115, 0x315, 0x095, 0x295, 0x195, 0x395, 0x055, 0x255,
    0x155, 0x355, 0x0d5, 0x2d5, 0x1d5, 0x3d5, 0x035, 0x235, 0x135, 0x335, 0x0b5,
    0x2b5, 0x1b5, 0x3b5, 0x075, 0x275, 0x175, 0x375, 0x0f5, 0x2f5, 0x1f5, 0x3f5,
    0x00d, 0x20d, 0x10d, 0x30d, 0x08d, 0x28d, 0x18d, 0x38d, 0x04d, 0x24d, 0x14d,
    0x34d, 0x0cd, 0x2cd, 0x1cd, 0x3cd, 0x02d, 0x22d, 0x12d, 0x32d, 0x0ad, 0x2ad,
    0x1ad, 0x3ad, 0x06d, 0x26d, 0x16d, 0x36d, 0x0ed, 0x2ed, 0x1ed, 0x3ed, 0x01d,
    0x21d, 0x11d, 0x31d, 0x09d, 0x29d, 0x19d, 0x39d, 0x05d, 0x25d, 0x15d, 0x35d,
    0x0dd, 0x2dd, 0x1dd, 0x3dd, 0x03d, 0x23d, 0x13d, 0x33d, 0x0bd, 0x2bd, 0x1bd,
    0x3bd, 0x07d, 0x27d, 0x17d, 0x37d, 0x0fd, 0x2fd, 0x1fd, 0x3fd, 0x003, 0x203,
    0x103, 0x303, 0x083, 0x283, 0x183, 0x383, 0x043, 0x243, 0x143, 0x343, 0x0c3,
    0x2c3, 0x1c3, 0x3c3, 0x023, 0x223, 0x123, 0x323, 0x0a3, 0x2a3, 0x1a3, 0x3a3,
    0x063, 0x263, 0x163, 0x363, 0x0e3, 0x2e3, 0x1e3, 0x3e3, 0x013, 0x213, 0x113,
    0x313, 0x093, 0x293, 0x193, 0x393, 0x053, 0x253, 0x153, 0x353, 0x0d3, 0x2d3,
    0x1d3, 0x3d3, 0x033, 0x233, 0x133, 0x333, 0x0b3, 0x2b3, 0x1b3, 0x3b3, 0x073,
    0x273, 0x173, 0x373, 0x0f3, 0x2f3, 0x1f3, 0x3f3, 0x00b, 0x20b, 0x10b, 0x30b,
    0x08b, 0x28b, 0x18b, 0x38b, 0x04b, 0x24b, 0x14b, 0x34b, 0x0cb, 0x2cb, 0x1cb,
    0x3cb, 0x02b, 0x22b, 0x12b, 0x32b, 0x0ab, 0x2ab, 0x1ab, 0x3ab, 0x06b, 0x26b,
    0x16b, 0x36b, 0x0eb, 0x2eb, 0x1eb, 0x3eb, 0x01b, 0x21b, 0x11b, 0x31b, 0x09b,
    0x29b, 0x19b, 0x39b, 0x05b, 0x25b, 0x15b, 0x35b, 0x0db, 0x2db, 0x1db, 0x3db,
    0x03b, 0x23b, 0x13b, 0x33b, 0x0bb, 0x2bb, 0x1bb, 0x3bb, 0x07b, 0x27b, 0x17b,
    0x37b, 0x0fb, 0x2fb, 0x1fb, 0x3fb, 0x007, 0x207, 0x107, 0x307, 0x087, 0x287,
    0x187, 0x387, 0x047, 0x247, 0x147, 0x347, 0x0c7, 0x2c7, 0x1c7, 0x3c7, 0x027,
    0x227, 0x127, 0x327, 0x0a7, 0x2a7, 0x1a7, 0x3a7, 0x067, 0x267, 0x167, 0x367,
    0x0e7, 0x2e7, 0x1e7, 0x3e7, 0x017, 0x217, 0x117, 0x317, 0x097, 0x297, 0x197,
    0x397, 0x057, 0x257, 0x157, 0x357, 0x0d7, 0x2d7, 0x1d7, 0x3d7, 0x037, 0x237,
    0x137, 0x337, 0x0b7, 0x2b7, 0x1b7, 0x3b7, 0x077, 0x277, 0x177, 0x377, 0x0f7,
    0x2f7, 0x1f7, 0x3f7, 0x00f, 0x20f, 0x10f, 0x30f, 0x08f, 0x28f, 0x18f, 0x38f,
    0x04f, 0x24f, 0x14f, 0x34f, 0x0cf, 0x2cf, 0x1cf, 0x3cf, 0x02f, 0x22f, 0x12f,
    0x32f, 0x0af, 0x2af, 0x1af, 0x3af, 0x06f, 0x26f, 0x16f, 0x36f, 0x0ef, 0x2ef,
    0x1ef, 0x3ef, 0x01f, 0x21f, 0x11f, 0x31f, 0x09f, 0x29f, 0x19f, 0x39f, 0x05f,
    0x25f, 0x15f, 0x35f, 0x0df, 0x2df, 0x1df, 0x3df, 0x03f, 0x23f, 0x13f, 0x33f,
    0x0bf, 0x2bf, 0x1bf, 0x3bf, 0x07f, 0x27f, 0x17f, 0x37f, 0x0ff, 0x2ff, 0x1ff,
    0x3ff,
};

#ifdef __cplusplus
}
#endif

#endif  // __MAM_V2_NTRU_POLY_PARAM_H__