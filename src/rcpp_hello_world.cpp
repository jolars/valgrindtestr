// Set up a leaky function

#include <Rcpp.h>

using namespace Rcpp;


//' Red flag
//'
//' This function introduces a memory leak that is supposed to trigger
//' valgrind and throw and error in R CMD check.
//'
//' @return Stuff.
//'
//' @examples
//' repeat(ouch, 10)
//'
//' @export
// [[Rcpp::export]]
NumericVector ouch() {
  NumericVector x(10);
  x[1000000] = 1;
  return x;
}
