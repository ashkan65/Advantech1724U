/*
 * Tutorial example #1
 * Part of Comedilib
 *
 * Copyright (c) 1999,2000 David A. Schleef <ds@schleef.org>
 *
 * This file may be freely modified, distributed, and combined with
 * other software, as long as proper attribution is given in the
 * source code.
 */

// #include <stdio.h>	/* for printf() */
#include <comedilib.hpp>
#include <Eigen/Dense>
#include <iostream>
using Eigen::MatrixXd;

int subdev = 0;		/* change this to your input subdevice */
int chan = 10;		/* change this to your channel */
int range = 16383;		/* more on this later */
int aref = AREF_GROUND;	/* more on this later */
unsigned int subdevice = 0;
int res;
int main()
{
	comedi_t *it;
	int chan = 0;
	lsampl_t data = 0;
	int retval;

	it = comedi_open("/dev/comedi0");
	if(it == NULL) {
		printf("did not work");
		comedi_perror("comedi_open");
		return 1;
	}
	// res = comedi_data_write(it, subdev, chan, range, aref, 0);
	retval = comedi_data_write(it, subdev, 0,0, AREF_GROUND, 16383/2);
	// if(retval < 0) {
	// 	comedi_perror("comedi_data_read");
	// 	return 1;
	// }
	int a = comedi_get_maxdata(it, subdev, chan);
	printf("%d\n", retval);
 	Eigen::MatrixXd m(2,2);
	m(0,0) = 5;
	m(1,0) = 2.5;
	m(0,1) = -1;
	m(1,1) = m(1,0) + m(0,1);
	std::cout << m << std::endl;
	return 0;
}