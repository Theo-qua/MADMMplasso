#ifndef MISC_H
#define MISC_H

#include <RcppArmadillo.h>
arma::ivec multiples_of(arma::ivec, int, bool = false);
arma::mat scale_cpp(arma::mat, arma::vec);
arma::vec sqrt_sum_squared_rows(arma::mat);
arma::uvec modulo(arma::uvec, int);
arma::mat model_intercept(
  const arma::vec,
  const arma::mat,
  const arma::mat,
  const arma::cube,
  const arma::mat,
  const arma::mat
);
#endif
