// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// qatd_cpp_collocations
DataFrame qatd_cpp_collocations(const List& texts_, const CharacterVector& types_, const IntegerVector& words_ignore_, const unsigned int count_min, const IntegerVector sizes_, const String& method, const double smoothing);
RcppExport SEXP _quanteda_textstats_qatd_cpp_collocations(SEXP texts_SEXP, SEXP types_SEXP, SEXP words_ignore_SEXP, SEXP count_minSEXP, SEXP sizes_SEXP, SEXP methodSEXP, SEXP smoothingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type types_(types_SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type words_ignore_(words_ignore_SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type count_min(count_minSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type sizes_(sizes_SEXP);
    Rcpp::traits::input_parameter< const String& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const double >::type smoothing(smoothingSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_collocations(texts_, types_, words_ignore_, count_min, sizes_, method, smoothing));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_manhattan
NumericMatrix qatd_cpp_manhattan(const arma::sp_mat& A, const int margin);
RcppExport SEXP _quanteda_textstats_qatd_cpp_manhattan(SEXP ASEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_manhattan(A, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_manhattan2
NumericMatrix qatd_cpp_manhattan2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin);
RcppExport SEXP _quanteda_textstats_qatd_cpp_manhattan2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_manhattan2(A, B, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_maximum
NumericMatrix qatd_cpp_maximum(const arma::sp_mat& A, const int margin);
RcppExport SEXP _quanteda_textstats_qatd_cpp_maximum(SEXP ASEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_maximum(A, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_maximum2
NumericMatrix qatd_cpp_maximum2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin);
RcppExport SEXP _quanteda_textstats_qatd_cpp_maximum2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_maximum2(A, B, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_canberra
NumericMatrix qatd_cpp_canberra(const arma::sp_mat& A, const int margin);
RcppExport SEXP _quanteda_textstats_qatd_cpp_canberra(SEXP ASEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_canberra(A, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_canberra2
NumericMatrix qatd_cpp_canberra2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin);
RcppExport SEXP _quanteda_textstats_qatd_cpp_canberra2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_canberra2(A, B, margin));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_minkowski
NumericMatrix qatd_cpp_minkowski(const arma::sp_mat& A, const int margin, const double p);
RcppExport SEXP _quanteda_textstats_qatd_cpp_minkowski(SEXP ASEXP, SEXP marginSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_minkowski(A, margin, p));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_minkowski2
NumericMatrix qatd_cpp_minkowski2(const arma::sp_mat& A, const arma::sp_mat& B, const int margin, const double p);
RcppExport SEXP _quanteda_textstats_qatd_cpp_minkowski2(SEXP ASEXP, SEXP BSEXP, SEXP marginSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const int >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_minkowski2(A, B, margin, p));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_keyness
Rcpp::NumericVector qatd_cpp_keyness(arma::sp_mat& mt, const std::string measure, const std::string correct);
RcppExport SEXP _quanteda_textstats_qatd_cpp_keyness(SEXP mtSEXP, SEXP measureSEXP, SEXP correctSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type mt(mtSEXP);
    Rcpp::traits::input_parameter< const std::string >::type measure(measureSEXP);
    Rcpp::traits::input_parameter< const std::string >::type correct(correctSEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_keyness(mt, measure, correct));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_kwic
DataFrame qatd_cpp_kwic(const List& texts_, const CharacterVector types_, const List& words_, const IntegerVector& pats_, const unsigned int& window, const String& delim_);
RcppExport SEXP _quanteda_textstats_qatd_cpp_kwic(SEXP texts_SEXP, SEXP types_SEXP, SEXP words_SEXP, SEXP pats_SEXP, SEXP windowSEXP, SEXP delim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type texts_(texts_SEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type types_(types_SEXP);
    Rcpp::traits::input_parameter< const List& >::type words_(words_SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type pats_(pats_SEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type window(windowSEXP);
    Rcpp::traits::input_parameter< const String& >::type delim_(delim_SEXP);
    rcpp_result_gen = Rcpp::wrap(qatd_cpp_kwic(texts_, types_, words_, pats_, window, delim_));
    return rcpp_result_gen;
END_RCPP
}
// qatd_cpp_set_meta
void qatd_cpp_set_meta(RObject object_, List meta_);
RcppExport SEXP _quanteda_textstats_qatd_cpp_set_meta(SEXP object_SEXP, SEXP meta_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object_(object_SEXP);
    Rcpp::traits::input_parameter< List >::type meta_(meta_SEXP);
    qatd_cpp_set_meta(object_, meta_);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_quanteda_textstats_qatd_cpp_collocations", (DL_FUNC) &_quanteda_textstats_qatd_cpp_collocations, 7},
    {"_quanteda_textstats_qatd_cpp_manhattan", (DL_FUNC) &_quanteda_textstats_qatd_cpp_manhattan, 2},
    {"_quanteda_textstats_qatd_cpp_manhattan2", (DL_FUNC) &_quanteda_textstats_qatd_cpp_manhattan2, 3},
    {"_quanteda_textstats_qatd_cpp_maximum", (DL_FUNC) &_quanteda_textstats_qatd_cpp_maximum, 2},
    {"_quanteda_textstats_qatd_cpp_maximum2", (DL_FUNC) &_quanteda_textstats_qatd_cpp_maximum2, 3},
    {"_quanteda_textstats_qatd_cpp_canberra", (DL_FUNC) &_quanteda_textstats_qatd_cpp_canberra, 2},
    {"_quanteda_textstats_qatd_cpp_canberra2", (DL_FUNC) &_quanteda_textstats_qatd_cpp_canberra2, 3},
    {"_quanteda_textstats_qatd_cpp_minkowski", (DL_FUNC) &_quanteda_textstats_qatd_cpp_minkowski, 3},
    {"_quanteda_textstats_qatd_cpp_minkowski2", (DL_FUNC) &_quanteda_textstats_qatd_cpp_minkowski2, 4},
    {"_quanteda_textstats_qatd_cpp_keyness", (DL_FUNC) &_quanteda_textstats_qatd_cpp_keyness, 3},
    {"_quanteda_textstats_qatd_cpp_kwic", (DL_FUNC) &_quanteda_textstats_qatd_cpp_kwic, 6},
    {"_quanteda_textstats_qatd_cpp_set_meta", (DL_FUNC) &_quanteda_textstats_qatd_cpp_set_meta, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_quanteda_textstats(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
