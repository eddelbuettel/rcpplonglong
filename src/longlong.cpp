// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-

#include <Rcpp.h>

#if defined(RCPP_HAS_LONG_LONG_TYPES)

//' Simple test function for long long vectors
//'
//' @title A simple test function for long long vectors
//' @param x A vector of long long integers
//' @return A double vector
//' @author Dirk Eddelbuettel
// [[Rcpp::export]]
std::vector<double> longlongFun(std::vector<long long> x) {
    std::vector<double> y(x.size());
    std::copy(x.begin(), x.end(), y.begin());
    return y;
}

#endif


//' Simple test function for long vectors
//'
//' @title A simple test function for long vectors
//' @param x A vector of long long integers
//' @return A double vector
//' @author Dirk Eddelbuettel
// [[Rcpp::export]]
std::vector<double> longFun(std::vector<long> x) {
    std::vector<double> y(x.size());
    std::copy(x.begin(), x.end(), y.begin());
    return y;
}
