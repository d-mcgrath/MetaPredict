// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// put_na
DataFrame put_na(DataFrame recon, DataFrame pred);
RcppExport SEXP _MetaPredict_put_na(SEXP reconSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type recon(reconSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pred(predSEXP);
    rcpp_result_gen = Rcpp::wrap(put_na(recon, pred));
    return rcpp_result_gen;
END_RCPP
}
// put_pred
DataFrame put_pred(DataFrame result, DataFrame pred);
RcppExport SEXP _MetaPredict_put_pred(SEXP resultSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type result(resultSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pred(predSEXP);
    rcpp_result_gen = Rcpp::wrap(put_pred(result, pred));
    return rcpp_result_gen;
END_RCPP
}
// reclassify
DataFrame reclassify(DataFrame result);
RcppExport SEXP _MetaPredict_reclassify(SEXP resultSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type result(resultSEXP);
    rcpp_result_gen = Rcpp::wrap(reclassify(result));
    return rcpp_result_gen;
END_RCPP
}
// na_to_zero
DataFrame na_to_zero(DataFrame kegg_df);
RcppExport SEXP _MetaPredict_na_to_zero(SEXP kegg_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type kegg_df(kegg_dfSEXP);
    rcpp_result_gen = Rcpp::wrap(na_to_zero(kegg_df));
    return rcpp_result_gen;
END_RCPP
}
// round_predictions
DataFrame round_predictions(DataFrame pred_df);
RcppExport SEXP _MetaPredict_round_predictions(SEXP pred_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type pred_df(pred_dfSEXP);
    rcpp_result_gen = Rcpp::wrap(round_predictions(pred_df));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MetaPredict_put_na", (DL_FUNC) &_MetaPredict_put_na, 2},
    {"_MetaPredict_put_pred", (DL_FUNC) &_MetaPredict_put_pred, 2},
    {"_MetaPredict_reclassify", (DL_FUNC) &_MetaPredict_reclassify, 1},
    {"_MetaPredict_na_to_zero", (DL_FUNC) &_MetaPredict_na_to_zero, 1},
    {"_MetaPredict_round_predictions", (DL_FUNC) &_MetaPredict_round_predictions, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_MetaPredict(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
