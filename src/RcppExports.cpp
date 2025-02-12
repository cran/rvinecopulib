// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <RcppThread.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// pseudo_obs_cpp
Eigen::MatrixXd pseudo_obs_cpp(Eigen::MatrixXd x, std::string ties_method);
RcppExport SEXP _rvinecopulib_pseudo_obs_cpp(SEXP xSEXP, SEXP ties_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type ties_method(ties_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(pseudo_obs_cpp(x, ties_method));
    return rcpp_result_gen;
END_RCPP
}
// bicop_check_cpp
void bicop_check_cpp(const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_check_cpp(SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    bicop_check_cpp(bicop_r);
    return R_NilValue;
END_RCPP
}
// bicop_select_cpp
Rcpp::List bicop_select_cpp(const Eigen::MatrixXd& data, std::vector<std::string> family_set, std::string par_method, std::string nonpar_method, double mult, std::string selcrit, const Eigen::VectorXd& weights, double psi0, bool presel, size_t num_threads, bool allow_rotations, std::vector<std::string> var_types);
RcppExport SEXP _rvinecopulib_bicop_select_cpp(SEXP dataSEXP, SEXP family_setSEXP, SEXP par_methodSEXP, SEXP nonpar_methodSEXP, SEXP multSEXP, SEXP selcritSEXP, SEXP weightsSEXP, SEXP psi0SEXP, SEXP preselSEXP, SEXP num_threadsSEXP, SEXP allow_rotationsSEXP, SEXP var_typesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type family_set(family_setSEXP);
    Rcpp::traits::input_parameter< std::string >::type par_method(par_methodSEXP);
    Rcpp::traits::input_parameter< std::string >::type nonpar_method(nonpar_methodSEXP);
    Rcpp::traits::input_parameter< double >::type mult(multSEXP);
    Rcpp::traits::input_parameter< std::string >::type selcrit(selcritSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type psi0(psi0SEXP);
    Rcpp::traits::input_parameter< bool >::type presel(preselSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type allow_rotations(allow_rotationsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type var_types(var_typesSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_select_cpp(data, family_set, par_method, nonpar_method, mult, selcrit, weights, psi0, presel, num_threads, allow_rotations, var_types));
    return rcpp_result_gen;
END_RCPP
}
// bicop_pdf_cpp
Eigen::VectorXd bicop_pdf_cpp(const Eigen::MatrixXd& u, const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_pdf_cpp(SEXP uSEXP, SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_pdf_cpp(u, bicop_r));
    return rcpp_result_gen;
END_RCPP
}
// bicop_cdf_cpp
Eigen::VectorXd bicop_cdf_cpp(const Eigen::MatrixXd& u, const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_cdf_cpp(SEXP uSEXP, SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_cdf_cpp(u, bicop_r));
    return rcpp_result_gen;
END_RCPP
}
// bicop_hfunc1_cpp
Eigen::VectorXd bicop_hfunc1_cpp(const Eigen::MatrixXd& u, const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_hfunc1_cpp(SEXP uSEXP, SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_hfunc1_cpp(u, bicop_r));
    return rcpp_result_gen;
END_RCPP
}
// bicop_hfunc2_cpp
Eigen::VectorXd bicop_hfunc2_cpp(const Eigen::MatrixXd& u, const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_hfunc2_cpp(SEXP uSEXP, SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_hfunc2_cpp(u, bicop_r));
    return rcpp_result_gen;
END_RCPP
}
// bicop_hinv1_cpp
Eigen::VectorXd bicop_hinv1_cpp(const Eigen::MatrixXd& u, const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_hinv1_cpp(SEXP uSEXP, SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_hinv1_cpp(u, bicop_r));
    return rcpp_result_gen;
END_RCPP
}
// bicop_hinv2_cpp
Eigen::VectorXd bicop_hinv2_cpp(const Eigen::MatrixXd& u, const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_hinv2_cpp(SEXP uSEXP, SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_hinv2_cpp(u, bicop_r));
    return rcpp_result_gen;
END_RCPP
}
// bicop_sim_cpp
Eigen::MatrixXd bicop_sim_cpp(const Rcpp::List& bicop_r, const size_t& n, const bool qrng, std::vector<int> seeds);
RcppExport SEXP _rvinecopulib_bicop_sim_cpp(SEXP bicop_rSEXP, SEXP nSEXP, SEXP qrngSEXP, SEXP seedsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    Rcpp::traits::input_parameter< const size_t& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const bool >::type qrng(qrngSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type seeds(seedsSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_sim_cpp(bicop_r, n, qrng, seeds));
    return rcpp_result_gen;
END_RCPP
}
// bicop_par_to_tau_cpp
double bicop_par_to_tau_cpp(const Rcpp::List& bicop_r);
RcppExport SEXP _rvinecopulib_bicop_par_to_tau_cpp(SEXP bicop_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_par_to_tau_cpp(bicop_r));
    return rcpp_result_gen;
END_RCPP
}
// bicop_tau_to_par_cpp
Eigen::MatrixXd bicop_tau_to_par_cpp(const Rcpp::List& bicop_r, const double& tau);
RcppExport SEXP _rvinecopulib_bicop_tau_to_par_cpp(SEXP bicop_rSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type bicop_r(bicop_rSEXP);
    Rcpp::traits::input_parameter< const double& >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(bicop_tau_to_par_cpp(bicop_r, tau));
    return rcpp_result_gen;
END_RCPP
}
// rvine_structure_cpp
Rcpp::List rvine_structure_cpp(const Rcpp::List& rvine_structure_r, bool check, bool is_natural_order);
RcppExport SEXP _rvinecopulib_rvine_structure_cpp(SEXP rvine_structure_rSEXP, SEXP checkSEXP, SEXP is_natural_orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type rvine_structure_r(rvine_structure_rSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    Rcpp::traits::input_parameter< bool >::type is_natural_order(is_natural_orderSEXP);
    rcpp_result_gen = Rcpp::wrap(rvine_structure_cpp(rvine_structure_r, check, is_natural_order));
    return rcpp_result_gen;
END_RCPP
}
// rvine_structure_check_cpp
void rvine_structure_check_cpp(const Rcpp::List& rvine_struct, bool is_natural_order);
RcppExport SEXP _rvinecopulib_rvine_structure_check_cpp(SEXP rvine_structSEXP, SEXP is_natural_orderSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type rvine_struct(rvine_structSEXP);
    Rcpp::traits::input_parameter< bool >::type is_natural_order(is_natural_orderSEXP);
    rvine_structure_check_cpp(rvine_struct, is_natural_order);
    return R_NilValue;
END_RCPP
}
// rvine_structure_sim_cpp
Rcpp::List rvine_structure_sim_cpp(size_t d, bool natural_order, const std::vector<int>& seeds);
RcppExport SEXP _rvinecopulib_rvine_structure_sim_cpp(SEXP dSEXP, SEXP natural_orderSEXP, SEXP seedsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type d(dSEXP);
    Rcpp::traits::input_parameter< bool >::type natural_order(natural_orderSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type seeds(seedsSEXP);
    rcpp_result_gen = Rcpp::wrap(rvine_structure_sim_cpp(d, natural_order, seeds));
    return rcpp_result_gen;
END_RCPP
}
// rvine_matrix_check_cpp
void rvine_matrix_check_cpp(Eigen::Matrix<size_t, Eigen::Dynamic, Eigen::Dynamic> matrix);
RcppExport SEXP _rvinecopulib_rvine_matrix_check_cpp(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Matrix<size_t, Eigen::Dynamic, Eigen::Dynamic> >::type matrix(matrixSEXP);
    rvine_matrix_check_cpp(matrix);
    return R_NilValue;
END_RCPP
}
// vinecop_check_cpp
void vinecop_check_cpp(Rcpp::List vinecop_r);
RcppExport SEXP _rvinecopulib_vinecop_check_cpp(SEXP vinecop_rSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type vinecop_r(vinecop_rSEXP);
    vinecop_check_cpp(vinecop_r);
    return R_NilValue;
END_RCPP
}
// vinecop_inverse_rosenblatt_cpp
Eigen::MatrixXd vinecop_inverse_rosenblatt_cpp(const Eigen::MatrixXd& U, const Rcpp::List& vinecop_r, size_t cores);
RcppExport SEXP _rvinecopulib_vinecop_inverse_rosenblatt_cpp(SEXP USEXP, SEXP vinecop_rSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type U(USEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vinecop_r(vinecop_rSEXP);
    Rcpp::traits::input_parameter< size_t >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(vinecop_inverse_rosenblatt_cpp(U, vinecop_r, cores));
    return rcpp_result_gen;
END_RCPP
}
// vinecop_rosenblatt_cpp
Eigen::MatrixXd vinecop_rosenblatt_cpp(const Eigen::MatrixXd& U, const Rcpp::List& vinecop_r, size_t cores, bool randomize_discrete, std::vector<int> seeds);
RcppExport SEXP _rvinecopulib_vinecop_rosenblatt_cpp(SEXP USEXP, SEXP vinecop_rSEXP, SEXP coresSEXP, SEXP randomize_discreteSEXP, SEXP seedsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type U(USEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vinecop_r(vinecop_rSEXP);
    Rcpp::traits::input_parameter< size_t >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< bool >::type randomize_discrete(randomize_discreteSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type seeds(seedsSEXP);
    rcpp_result_gen = Rcpp::wrap(vinecop_rosenblatt_cpp(U, vinecop_r, cores, randomize_discrete, seeds));
    return rcpp_result_gen;
END_RCPP
}
// vinecop_sim_cpp
Eigen::MatrixXd vinecop_sim_cpp(const Rcpp::List& vinecop_r, const size_t n, const bool qrng, size_t cores, std::vector<int> seeds);
RcppExport SEXP _rvinecopulib_vinecop_sim_cpp(SEXP vinecop_rSEXP, SEXP nSEXP, SEXP qrngSEXP, SEXP coresSEXP, SEXP seedsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vinecop_r(vinecop_rSEXP);
    Rcpp::traits::input_parameter< const size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< const bool >::type qrng(qrngSEXP);
    Rcpp::traits::input_parameter< size_t >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type seeds(seedsSEXP);
    rcpp_result_gen = Rcpp::wrap(vinecop_sim_cpp(vinecop_r, n, qrng, cores, seeds));
    return rcpp_result_gen;
END_RCPP
}
// vinecop_pdf_cpp
Eigen::VectorXd vinecop_pdf_cpp(const Eigen::MatrixXd& u, const Rcpp::List& vinecop_r, size_t cores);
RcppExport SEXP _rvinecopulib_vinecop_pdf_cpp(SEXP uSEXP, SEXP vinecop_rSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vinecop_r(vinecop_rSEXP);
    Rcpp::traits::input_parameter< size_t >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(vinecop_pdf_cpp(u, vinecop_r, cores));
    return rcpp_result_gen;
END_RCPP
}
// vinecop_cdf_cpp
Eigen::VectorXd vinecop_cdf_cpp(const Eigen::MatrixXd& u, const Rcpp::List& vinecop_r, size_t N, size_t cores, std::vector<int> seeds);
RcppExport SEXP _rvinecopulib_vinecop_cdf_cpp(SEXP uSEXP, SEXP vinecop_rSEXP, SEXP NSEXP, SEXP coresSEXP, SEXP seedsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vinecop_r(vinecop_rSEXP);
    Rcpp::traits::input_parameter< size_t >::type N(NSEXP);
    Rcpp::traits::input_parameter< size_t >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type seeds(seedsSEXP);
    rcpp_result_gen = Rcpp::wrap(vinecop_cdf_cpp(u, vinecop_r, N, cores, seeds));
    return rcpp_result_gen;
END_RCPP
}
// vinecop_select_cpp
Rcpp::List vinecop_select_cpp(const Eigen::MatrixXd& data, Rcpp::List& structure, std::vector<std::string> family_set, std::string par_method, std::string nonpar_method, double mult, int truncation_level, std::string tree_criterion, double threshold, std::string selection_criterion, const Eigen::VectorXd& weights, double psi0, bool select_truncation_level, bool select_threshold, bool preselect_families, bool select_families, bool allow_rotations, bool show_trace, size_t num_threads, std::vector<std::string> var_types);
RcppExport SEXP _rvinecopulib_vinecop_select_cpp(SEXP dataSEXP, SEXP structureSEXP, SEXP family_setSEXP, SEXP par_methodSEXP, SEXP nonpar_methodSEXP, SEXP multSEXP, SEXP truncation_levelSEXP, SEXP tree_criterionSEXP, SEXP thresholdSEXP, SEXP selection_criterionSEXP, SEXP weightsSEXP, SEXP psi0SEXP, SEXP select_truncation_levelSEXP, SEXP select_thresholdSEXP, SEXP preselect_familiesSEXP, SEXP select_familiesSEXP, SEXP allow_rotationsSEXP, SEXP show_traceSEXP, SEXP num_threadsSEXP, SEXP var_typesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type structure(structureSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type family_set(family_setSEXP);
    Rcpp::traits::input_parameter< std::string >::type par_method(par_methodSEXP);
    Rcpp::traits::input_parameter< std::string >::type nonpar_method(nonpar_methodSEXP);
    Rcpp::traits::input_parameter< double >::type mult(multSEXP);
    Rcpp::traits::input_parameter< int >::type truncation_level(truncation_levelSEXP);
    Rcpp::traits::input_parameter< std::string >::type tree_criterion(tree_criterionSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< std::string >::type selection_criterion(selection_criterionSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type psi0(psi0SEXP);
    Rcpp::traits::input_parameter< bool >::type select_truncation_level(select_truncation_levelSEXP);
    Rcpp::traits::input_parameter< bool >::type select_threshold(select_thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type preselect_families(preselect_familiesSEXP);
    Rcpp::traits::input_parameter< bool >::type select_families(select_familiesSEXP);
    Rcpp::traits::input_parameter< bool >::type allow_rotations(allow_rotationsSEXP);
    Rcpp::traits::input_parameter< bool >::type show_trace(show_traceSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type var_types(var_typesSEXP);
    rcpp_result_gen = Rcpp::wrap(vinecop_select_cpp(data, structure, family_set, par_method, nonpar_method, mult, truncation_level, tree_criterion, threshold, selection_criterion, weights, psi0, select_truncation_level, select_threshold, preselect_families, select_families, allow_rotations, show_trace, num_threads, var_types));
    return rcpp_result_gen;
END_RCPP
}
// vinecop_fit_cpp
Rcpp::List vinecop_fit_cpp(const Eigen::MatrixXd& data, Rcpp::List& vinecop_r, std::string par_method, std::string nonpar_method, double mult, const Eigen::VectorXd& weights, bool show_trace, size_t num_threads);
RcppExport SEXP _rvinecopulib_vinecop_fit_cpp(SEXP dataSEXP, SEXP vinecop_rSEXP, SEXP par_methodSEXP, SEXP nonpar_methodSEXP, SEXP multSEXP, SEXP weightsSEXP, SEXP show_traceSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type vinecop_r(vinecop_rSEXP);
    Rcpp::traits::input_parameter< std::string >::type par_method(par_methodSEXP);
    Rcpp::traits::input_parameter< std::string >::type nonpar_method(nonpar_methodSEXP);
    Rcpp::traits::input_parameter< double >::type mult(multSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type show_trace(show_traceSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(vinecop_fit_cpp(data, vinecop_r, par_method, nonpar_method, mult, weights, show_trace, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// fit_margins_cpp
std::vector<Rcpp::List> fit_margins_cpp(const Eigen::MatrixXd& data, const Eigen::VectorXd& xmin, const Eigen::VectorXd& xmax, const std::vector<std::string>& type, const Eigen::VectorXd& mult, const Eigen::VectorXd& bw, const Eigen::VectorXi& deg, const Eigen::VectorXd& weights, size_t num_threads);
RcppExport SEXP _rvinecopulib_fit_margins_cpp(SEXP dataSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP typeSEXP, SEXP multSEXP, SEXP bwSEXP, SEXP degSEXP, SEXP weightsSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type type(typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type mult(multSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXi& >::type deg(degSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_margins_cpp(data, xmin, xmax, type, mult, bw, deg, weights, num_threads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rvinecopulib_pseudo_obs_cpp", (DL_FUNC) &_rvinecopulib_pseudo_obs_cpp, 2},
    {"_rvinecopulib_bicop_check_cpp", (DL_FUNC) &_rvinecopulib_bicop_check_cpp, 1},
    {"_rvinecopulib_bicop_select_cpp", (DL_FUNC) &_rvinecopulib_bicop_select_cpp, 12},
    {"_rvinecopulib_bicop_pdf_cpp", (DL_FUNC) &_rvinecopulib_bicop_pdf_cpp, 2},
    {"_rvinecopulib_bicop_cdf_cpp", (DL_FUNC) &_rvinecopulib_bicop_cdf_cpp, 2},
    {"_rvinecopulib_bicop_hfunc1_cpp", (DL_FUNC) &_rvinecopulib_bicop_hfunc1_cpp, 2},
    {"_rvinecopulib_bicop_hfunc2_cpp", (DL_FUNC) &_rvinecopulib_bicop_hfunc2_cpp, 2},
    {"_rvinecopulib_bicop_hinv1_cpp", (DL_FUNC) &_rvinecopulib_bicop_hinv1_cpp, 2},
    {"_rvinecopulib_bicop_hinv2_cpp", (DL_FUNC) &_rvinecopulib_bicop_hinv2_cpp, 2},
    {"_rvinecopulib_bicop_sim_cpp", (DL_FUNC) &_rvinecopulib_bicop_sim_cpp, 4},
    {"_rvinecopulib_bicop_par_to_tau_cpp", (DL_FUNC) &_rvinecopulib_bicop_par_to_tau_cpp, 1},
    {"_rvinecopulib_bicop_tau_to_par_cpp", (DL_FUNC) &_rvinecopulib_bicop_tau_to_par_cpp, 2},
    {"_rvinecopulib_rvine_structure_cpp", (DL_FUNC) &_rvinecopulib_rvine_structure_cpp, 3},
    {"_rvinecopulib_rvine_structure_check_cpp", (DL_FUNC) &_rvinecopulib_rvine_structure_check_cpp, 2},
    {"_rvinecopulib_rvine_structure_sim_cpp", (DL_FUNC) &_rvinecopulib_rvine_structure_sim_cpp, 3},
    {"_rvinecopulib_rvine_matrix_check_cpp", (DL_FUNC) &_rvinecopulib_rvine_matrix_check_cpp, 1},
    {"_rvinecopulib_vinecop_check_cpp", (DL_FUNC) &_rvinecopulib_vinecop_check_cpp, 1},
    {"_rvinecopulib_vinecop_inverse_rosenblatt_cpp", (DL_FUNC) &_rvinecopulib_vinecop_inverse_rosenblatt_cpp, 3},
    {"_rvinecopulib_vinecop_rosenblatt_cpp", (DL_FUNC) &_rvinecopulib_vinecop_rosenblatt_cpp, 5},
    {"_rvinecopulib_vinecop_sim_cpp", (DL_FUNC) &_rvinecopulib_vinecop_sim_cpp, 5},
    {"_rvinecopulib_vinecop_pdf_cpp", (DL_FUNC) &_rvinecopulib_vinecop_pdf_cpp, 3},
    {"_rvinecopulib_vinecop_cdf_cpp", (DL_FUNC) &_rvinecopulib_vinecop_cdf_cpp, 5},
    {"_rvinecopulib_vinecop_select_cpp", (DL_FUNC) &_rvinecopulib_vinecop_select_cpp, 20},
    {"_rvinecopulib_vinecop_fit_cpp", (DL_FUNC) &_rvinecopulib_vinecop_fit_cpp, 8},
    {"_rvinecopulib_fit_margins_cpp", (DL_FUNC) &_rvinecopulib_fit_margins_cpp, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_rvinecopulib(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
