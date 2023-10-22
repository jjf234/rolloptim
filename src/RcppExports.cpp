// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/rolloptim.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// roll_min_var
NumericMatrix roll_min_var(const NumericVector& sigma, const double& total, const double& lower, const double& upper);
RcppExport SEXP _rolloptim_roll_min_var(SEXP sigmaSEXP, SEXP totalSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type total(totalSEXP);
    Rcpp::traits::input_parameter< const double& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const double& >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_min_var(sigma, total, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// roll_max_mean
NumericMatrix roll_max_mean(const NumericMatrix& mu, const double& total, const double& lower, const double& upper);
RcppExport SEXP _rolloptim_roll_max_mean(SEXP muSEXP, SEXP totalSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type total(totalSEXP);
    Rcpp::traits::input_parameter< const double& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const double& >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_max_mean(mu, total, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// roll_max_utility
NumericMatrix roll_max_utility(const NumericMatrix& mu, const NumericVector& sigma, const double& lambda, const double& total, const double& lower, const double& upper);
RcppExport SEXP _rolloptim_roll_max_utility(SEXP muSEXP, SEXP sigmaSEXP, SEXP lambdaSEXP, SEXP totalSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double& >::type total(totalSEXP);
    Rcpp::traits::input_parameter< const double& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< const double& >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_max_utility(mu, sigma, lambda, total, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
