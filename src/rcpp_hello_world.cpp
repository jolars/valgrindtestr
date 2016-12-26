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
//' ouch()
//'
//' @export
// [[Rcpp::export]]

void ouch() {
  int i, j;
  int a[10], b[10];

  for ( i = 0; i < 10; i++ ) {
    j += a[i];
  }
  if ( j == 77 )
    printf("hello there\n");
}

