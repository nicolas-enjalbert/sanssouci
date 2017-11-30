// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// empiricalCoverageO
NumericVector empiricalCoverageO(NumericVector thr, arma::mat Z);
RcppExport SEXP _sansSouci_empiricalCoverageO(SEXP thrSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(empiricalCoverageO(thr, Z));
    return rcpp_result_gen;
END_RCPP
}
// marginalKFWER
NumericVector marginalKFWER(NumericVector thr, arma::mat Z);
RcppExport SEXP _sansSouci_marginalKFWER(SEXP thrSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(marginalKFWER(thr, Z));
    return rcpp_result_gen;
END_RCPP
}
// minPseudoRanks
Rcpp::NumericVector minPseudoRanks(arma::mat X, arma::mat Y);
RcppExport SEXP _sansSouci_minPseudoRanks(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(minPseudoRanks(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// partialColSortDescCpp
arma::mat partialColSortDescCpp(arma::mat X, int k);
RcppExport SEXP _sansSouci_partialColSortDescCpp(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(partialColSortDescCpp(X, k));
    return rcpp_result_gen;
END_RCPP
}
// posthocBySimesRcpp
double posthocBySimesRcpp(NumericVector p, NumericVector select, double alpha);
RcppExport SEXP _sansSouci_posthocBySimesRcpp(SEXP pSEXP, SEXP selectSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type select(selectSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(posthocBySimesRcpp(p, select, alpha));
    return rcpp_result_gen;
END_RCPP
}
// rowSortDesc
arma::mat rowSortDesc(arma::mat X);
RcppExport SEXP _sansSouci_rowSortDesc(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(rowSortDesc(X));
    return rcpp_result_gen;
END_RCPP
}
// testBySignFlipping
arma::mat testBySignFlipping(arma::mat X, double B);
RcppExport SEXP _sansSouci_testBySignFlipping(SEXP XSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(testBySignFlipping(X, B));
    return rcpp_result_gen;
END_RCPP
}
// testByPermutation
arma::mat testByPermutation(arma::mat X, NumericVector cls, double B);
RcppExport SEXP _sansSouci_testByPermutation(SEXP XSEXP, SEXP clsSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cls(clsSEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(testByPermutation(X, cls, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sansSouci_empiricalCoverageO", (DL_FUNC) &_sansSouci_empiricalCoverageO, 2},
    {"_sansSouci_marginalKFWER", (DL_FUNC) &_sansSouci_marginalKFWER, 2},
    {"_sansSouci_minPseudoRanks", (DL_FUNC) &_sansSouci_minPseudoRanks, 2},
    {"_sansSouci_partialColSortDescCpp", (DL_FUNC) &_sansSouci_partialColSortDescCpp, 2},
    {"_sansSouci_posthocBySimesRcpp", (DL_FUNC) &_sansSouci_posthocBySimesRcpp, 3},
    {"_sansSouci_rowSortDesc", (DL_FUNC) &_sansSouci_rowSortDesc, 1},
    {"_sansSouci_testBySignFlipping", (DL_FUNC) &_sansSouci_testBySignFlipping, 2},
    {"_sansSouci_testByPermutation", (DL_FUNC) &_sansSouci_testByPermutation, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sansSouci(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
