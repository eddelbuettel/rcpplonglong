// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-

#include <Rcpp.h>

#if defined(RCPP_HAS_LONG_LONG_TYPES)

// turns out we cannot have 'long long' in the signature as Rcpp attributes
// will then carry it over to the RcppExports.cpp file where we do not have
// the #if defined() around it

// ' Simple test function for long long vectors
// '
// ' @title A simple test function for long long vectors
// ' @param x A vector of long long integers
// ' @return A double vector
// ' @author Dirk Eddelbuettel
// [ [ Rcpp::export ] ]
std::vector<double> longlongFun(std::vector<long long> x) {
    std::vector<double> y(x.size());
    std::copy(x.begin(), x.end(), y.begin());
    return y;
}

#endif


//' Simple test function for long vectors
//'
//' @title A simple test function for long vectors
//' @param x A vector of long integers
//' @return A double vector
//' @author Dirk Eddelbuettel
// [[Rcpp::export]]
std::vector<double> longFun(std::vector<long> x) {
    std::vector<double> y(x.size());
    std::copy(x.begin(), x.end(), y.begin());
    return y;
}

//' Simple test function for unsigned long vectors
//'
//' @title A simple test function for unsigned long vectors
//' @param x A vector of unsigned long integers
//' @return A double vector
//' @author Dirk Eddelbuettel
// [[Rcpp::export]]
std::vector<double> unsignedlongFun(std::vector<unsigned long> x) {
    std::vector<double> y(x.size());
    std::copy(x.begin(), x.end(), y.begin());
    return y;
}

//' Internal use of long long vectors
//'
//' @title Another simple test function for long long vectors
//' @param n An integer
//' @return A double
//' @author Dirk Eddelbuettel
// [[Rcpp::export]]
double longlongInside(int n) {
    std::vector<long long> x(n);
    for (int i=0; i<n; i++) x[i] = i;
    double s = std::accumulate(x.begin(), x.end(), 0);
    return s;
}
