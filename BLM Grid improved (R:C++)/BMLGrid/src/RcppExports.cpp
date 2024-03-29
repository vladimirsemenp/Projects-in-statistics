// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// moveRightInC
IntegerMatrix moveRightInC(IntegerMatrix m);
RcppExport SEXP BMLGrid_moveRightInC(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP );
        IntegerMatrix __result = moveRightInC(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// moveUpInC
IntegerMatrix moveUpInC(IntegerMatrix m);
RcppExport SEXP BMLGrid_moveUpInC(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP );
        IntegerMatrix __result = moveUpInC(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// wrapRightInC
IntegerMatrix wrapRightInC(IntegerMatrix m);
RcppExport SEXP BMLGrid_wrapRightInC(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP );
        IntegerMatrix __result = wrapRightInC(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// wrapUpInC
IntegerMatrix wrapUpInC(IntegerMatrix m);
RcppExport SEXP BMLGrid_wrapUpInC(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP );
        IntegerMatrix __result = wrapUpInC(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
