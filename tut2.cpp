#include <comedilib.hpp>
#include <iostream>

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
	retval = comedi_data_write(it, subdev, 0,0, AREF_GROUND, 16383/2);
	return 0;
}
