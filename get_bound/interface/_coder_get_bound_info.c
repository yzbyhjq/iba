/*
 * File: _coder_get_bound_info.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Jul-2020 13:49:32
 */

/* Include Files */
#include "_coder_get_bound_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[4] = {
    "789c6360f4f46500023e200e6066606003d21c40ccc40001ac503e23128688b330f042f94d409c9c9f57925a510291cc4bcc4d65808194fcdcccbcc4bc9290ca"
    "825486a2d4e2fc9cb2d414b04c5a664e6a48666eaa4f3e12c72313c8c9754392827340524519c57093197290391000f60703c21f2c58fc2187e40f01283fda35",
    "d6d54a3f37b144bf3cbf285b3f2d3f5f3f3db5243e29bf342f452f1762ae0101735950cc656148c92c2e20475f72466211485f02017dfa68fe00f1a33d237c9d"
    "605e01e2e2fcb412fd92fcfc9ca4fc0a103f2731493f27312f5d1fe438a0c740f65820d9c386c51ee478e7848a33303cf8ffffff7bc7e1a05f03493f2316fd0c",
    "4834a9ea01d1ea5a3f", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 864U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("get_bound"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_get_bound_info.c
 *
 * [EOF]
 */
