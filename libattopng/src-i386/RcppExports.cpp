// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
void rcpp_hello_world(const Rcpp::IntegerMatrix& mat, const CharacterVector& filename);
RcppExport SEXP _libattopng_rcpp_hello_world(SEXP matSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type filename(filenameSEXP);
    rcpp_hello_world(mat, filename);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_libattopng_rcpp_hello_world", (DL_FUNC) &_libattopng_rcpp_hello_world, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_libattopng(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
