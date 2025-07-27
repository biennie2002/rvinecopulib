#pragma once

#include <vinecopulib/bicop/archimedean.hpp>

namespace vinecopulib {
//! @brief The Gluing Frank copula.
class GluingFrankBicop : public ArchimedeanBicop
{
public:
  GluingFrankBicop();

private:
  double generator(const double& u);
  double generator_inv(const double& u);
  double generator_derivative(const double& u);
  double generator_derivative2(const double& u);

  Eigen::VectorXd pdf_raw(const Eigen::MatrixXd& u);

  Eigen::MatrixXd tau_to_parameters(const double& tau);
  double parameters_to_tau(const Eigen::MatrixXd& par);
  Eigen::VectorXd get_start_parameters(const double tau);
};
}

#include <vinecopulib/bicop/implementation/gluing_frank.ipp>
