// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_abm_simulate
Rcpp::List cpp_abm_simulate(double startx, double starty, int timesteps, int ndes, int nopt, std::vector<double> shelter_locs_x, std::vector<double> shelter_locs_y, double sSiteSize, std::vector<double> avoidPoints_x, std::vector<double> avoidPoints_y, double k_desRange, double s_desRange, double mu_desDir, double k_desDir, int destinationTrans, double destinationMod, int avoidTrans, double avoidMod, std::vector<double> k_step, std::vector<double> s_step, std::vector<double> mu_angle, std::vector<double> k_angle, double rescale, std::vector<double> b0_Options, std::vector<double> b1_Options, std::vector<double> b2_Options, double rest_Cycle_A, double rest_Cycle_M, double rest_Cycle_PHI, double rest_Cycle_TAU, int addCycles, std::vector<double> add_Cycle_A, std::vector<double> add_Cycle_M, std::vector<double> add_Cycle_PHI, std::vector<double> add_Cycle_TAU, Rcpp::NumericMatrix shelterMatrix, Rcpp::NumericMatrix forageMatrix, Rcpp::NumericMatrix moveMatrix, Rcpp::NumericMatrix inxMatrix, std::vector<double> envExt, Rcpp::NumericMatrix barriers, Rcpp::NumericMatrix lookup);
RcppExport SEXP _abmFences_cpp_abm_simulate(SEXP startxSEXP, SEXP startySEXP, SEXP timestepsSEXP, SEXP ndesSEXP, SEXP noptSEXP, SEXP shelter_locs_xSEXP, SEXP shelter_locs_ySEXP, SEXP sSiteSizeSEXP, SEXP avoidPoints_xSEXP, SEXP avoidPoints_ySEXP, SEXP k_desRangeSEXP, SEXP s_desRangeSEXP, SEXP mu_desDirSEXP, SEXP k_desDirSEXP, SEXP destinationTransSEXP, SEXP destinationModSEXP, SEXP avoidTransSEXP, SEXP avoidModSEXP, SEXP k_stepSEXP, SEXP s_stepSEXP, SEXP mu_angleSEXP, SEXP k_angleSEXP, SEXP rescaleSEXP, SEXP b0_OptionsSEXP, SEXP b1_OptionsSEXP, SEXP b2_OptionsSEXP, SEXP rest_Cycle_ASEXP, SEXP rest_Cycle_MSEXP, SEXP rest_Cycle_PHISEXP, SEXP rest_Cycle_TAUSEXP, SEXP addCyclesSEXP, SEXP add_Cycle_ASEXP, SEXP add_Cycle_MSEXP, SEXP add_Cycle_PHISEXP, SEXP add_Cycle_TAUSEXP, SEXP shelterMatrixSEXP, SEXP forageMatrixSEXP, SEXP moveMatrixSEXP, SEXP inxMatrixSEXP, SEXP envExtSEXP, SEXP barriersSEXP, SEXP lookupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type startx(startxSEXP);
    Rcpp::traits::input_parameter< double >::type starty(startySEXP);
    Rcpp::traits::input_parameter< int >::type timesteps(timestepsSEXP);
    Rcpp::traits::input_parameter< int >::type ndes(ndesSEXP);
    Rcpp::traits::input_parameter< int >::type nopt(noptSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type shelter_locs_x(shelter_locs_xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type shelter_locs_y(shelter_locs_ySEXP);
    Rcpp::traits::input_parameter< double >::type sSiteSize(sSiteSizeSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type avoidPoints_x(avoidPoints_xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type avoidPoints_y(avoidPoints_ySEXP);
    Rcpp::traits::input_parameter< double >::type k_desRange(k_desRangeSEXP);
    Rcpp::traits::input_parameter< double >::type s_desRange(s_desRangeSEXP);
    Rcpp::traits::input_parameter< double >::type mu_desDir(mu_desDirSEXP);
    Rcpp::traits::input_parameter< double >::type k_desDir(k_desDirSEXP);
    Rcpp::traits::input_parameter< int >::type destinationTrans(destinationTransSEXP);
    Rcpp::traits::input_parameter< double >::type destinationMod(destinationModSEXP);
    Rcpp::traits::input_parameter< int >::type avoidTrans(avoidTransSEXP);
    Rcpp::traits::input_parameter< double >::type avoidMod(avoidModSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type k_step(k_stepSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type s_step(s_stepSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mu_angle(mu_angleSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type k_angle(k_angleSEXP);
    Rcpp::traits::input_parameter< double >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type b0_Options(b0_OptionsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type b1_Options(b1_OptionsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type b2_Options(b2_OptionsSEXP);
    Rcpp::traits::input_parameter< double >::type rest_Cycle_A(rest_Cycle_ASEXP);
    Rcpp::traits::input_parameter< double >::type rest_Cycle_M(rest_Cycle_MSEXP);
    Rcpp::traits::input_parameter< double >::type rest_Cycle_PHI(rest_Cycle_PHISEXP);
    Rcpp::traits::input_parameter< double >::type rest_Cycle_TAU(rest_Cycle_TAUSEXP);
    Rcpp::traits::input_parameter< int >::type addCycles(addCyclesSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type add_Cycle_A(add_Cycle_ASEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type add_Cycle_M(add_Cycle_MSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type add_Cycle_PHI(add_Cycle_PHISEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type add_Cycle_TAU(add_Cycle_TAUSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type shelterMatrix(shelterMatrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type forageMatrix(forageMatrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type moveMatrix(moveMatrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type inxMatrix(inxMatrixSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type envExt(envExtSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type barriers(barriersSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type lookup(lookupSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_abm_simulate(startx, starty, timesteps, ndes, nopt, shelter_locs_x, shelter_locs_y, sSiteSize, avoidPoints_x, avoidPoints_y, k_desRange, s_desRange, mu_desDir, k_desDir, destinationTrans, destinationMod, avoidTrans, avoidMod, k_step, s_step, mu_angle, k_angle, rescale, b0_Options, b1_Options, b2_Options, rest_Cycle_A, rest_Cycle_M, rest_Cycle_PHI, rest_Cycle_TAU, addCycles, add_Cycle_A, add_Cycle_M, add_Cycle_PHI, add_Cycle_TAU, shelterMatrix, forageMatrix, moveMatrix, inxMatrix, envExt, barriers, lookup));
    return rcpp_result_gen;
END_RCPP
}
// cpp_check_intersection
double cpp_check_intersection(std::vector<double> origin, std::vector<double> target, int inx, Rcpp::NumericMatrix BARRIERS, Rcpp::NumericMatrix LOOKUP, Rcpp::NumericMatrix INXMAT);
RcppExport SEXP _abmFences_cpp_check_intersection(SEXP originSEXP, SEXP targetSEXP, SEXP inxSEXP, SEXP BARRIERSSEXP, SEXP LOOKUPSEXP, SEXP INXMATSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type origin(originSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< int >::type inx(inxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type BARRIERS(BARRIERSSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type LOOKUP(LOOKUPSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type INXMAT(INXMATSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_check_intersection(origin, target, inx, BARRIERS, LOOKUP, INXMAT));
    return rcpp_result_gen;
END_RCPP
}
// cpp_cycle_draw
double cpp_cycle_draw(double TIME, double A, double M, double PHI, double TAU);
RcppExport SEXP _abmFences_cpp_cycle_draw(SEXP TIMESEXP, SEXP ASEXP, SEXP MSEXP, SEXP PHISEXP, SEXP TAUSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type TIME(TIMESEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type PHI(PHISEXP);
    Rcpp::traits::input_parameter< double >::type TAU(TAUSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_cycle_draw(TIME, A, M, PHI, TAU));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_values
std::vector<double> cpp_get_values(Rcpp::NumericMatrix MATRIX, std::vector<double> XLOCS, std::vector<double> YLOCS);
RcppExport SEXP _abmFences_cpp_get_values(SEXP MATRIXSEXP, SEXP XLOCSSEXP, SEXP YLOCSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type MATRIX(MATRIXSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type XLOCS(XLOCSSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type YLOCS(YLOCSSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_values(MATRIX, XLOCS, YLOCS));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_values_rast
std::vector<double> cpp_get_values_rast(Rcpp::NumericMatrix RASTER, std::vector<double> ENVEXT, std::vector<double> XLOCS, std::vector<double> YLOCS);
RcppExport SEXP _abmFences_cpp_get_values_rast(SEXP RASTERSEXP, SEXP ENVEXTSEXP, SEXP XLOCSSEXP, SEXP YLOCSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type RASTER(RASTERSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ENVEXT(ENVEXTSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type XLOCS(XLOCSSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type YLOCS(YLOCSSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_values_rast(RASTER, ENVEXT, XLOCS, YLOCS));
    return rcpp_result_gen;
END_RCPP
}
// cpp_max
double cpp_max(std::vector<double> x);
RcppExport SEXP _abmFences_cpp_max(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_max(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_min
double cpp_min(std::vector<double> x);
RcppExport SEXP _abmFences_cpp_min(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_min(x));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sample_options
int cpp_sample_options(std::vector<double> W);
RcppExport SEXP _abmFences_cpp_sample_options(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sample_options(W));
    return rcpp_result_gen;
END_RCPP
}
// cpp_vonmises
std::vector<double> cpp_vonmises(int N, double MU, double KAPPA);
RcppExport SEXP _abmFences_cpp_vonmises(SEXP NSEXP, SEXP MUSEXP, SEXP KAPPASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type MU(MUSEXP);
    Rcpp::traits::input_parameter< double >::type KAPPA(KAPPASEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_vonmises(N, MU, KAPPA));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_abmFences_cpp_abm_simulate", (DL_FUNC) &_abmFences_cpp_abm_simulate, 42},
    {"_abmFences_cpp_check_intersection", (DL_FUNC) &_abmFences_cpp_check_intersection, 6},
    {"_abmFences_cpp_cycle_draw", (DL_FUNC) &_abmFences_cpp_cycle_draw, 5},
    {"_abmFences_cpp_get_values", (DL_FUNC) &_abmFences_cpp_get_values, 3},
    {"_abmFences_cpp_get_values_rast", (DL_FUNC) &_abmFences_cpp_get_values_rast, 4},
    {"_abmFences_cpp_max", (DL_FUNC) &_abmFences_cpp_max, 1},
    {"_abmFences_cpp_min", (DL_FUNC) &_abmFences_cpp_min, 1},
    {"_abmFences_cpp_sample_options", (DL_FUNC) &_abmFences_cpp_sample_options, 1},
    {"_abmFences_cpp_vonmises", (DL_FUNC) &_abmFences_cpp_vonmises, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_abmFences(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
