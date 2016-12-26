// Set up a leaky function

#include <Rcpp.h>

using namespace Rcpp;


//' Red flag
//'
//' This function introduces a memory leak that is supposed to trigger
//' valgrind and throw an error in R CMD check.
//'
//' @return Stuff.
//'
//' @examples
//' mistake()
//'
//' @export
// [[Rcpp::export]]

bool mistake() {
  NumericVector x(1);
  int n = INT_MAX;
  x[n] = 0;
  return true;
}

