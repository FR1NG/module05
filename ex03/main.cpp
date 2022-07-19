/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:37:13 by hchakoub          #+#    #+#             */
/*   Updated: 2022/07/16 18:43:58 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
  Intern chebL3arbi;
  Form *form1;
  Form *form2;
  Form *form3;
  Form *form4;

  form1 = chebL3arbi.makeForm("robotomy request", "robotiih");
  form2 = chebL3arbi.makeForm("shrubbery creation", "shrubbryh");
  form3 = chebL3arbi.makeForm("presidential pardon", "pardoniih");
  form4 = chebL3arbi.makeForm("chi7aja makaynach", "walohiih");

  delete form1;
  delete form2;
  delete form3;
  while (1)
    ;
  return (0);
}
