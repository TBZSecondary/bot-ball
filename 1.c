
int main()
{
	 //These commands moves Ernie out of the Starting Box
	motor(0,87);            // Turns on the right motor at 87%
	motor(1,87);            // Turns on the left motor at 87%
	msleep(4200);           // keep moving for 4.2 seconds
	// These commands move the robot 90 degrees to the left
	motor(0,-85);             //Turns on the right motor at 85%
	motor(1,85)             //Spins the left motor backwards at a rate of 85%
	msleep(1000);            // keep moving for 1 second
	//These commands move the robot backwards along the PVC pipe
	motor(0,-20);            // Spins the right motor backwards at a rate of 20%
	motor(1,-20);            // Spins the left motor backwards at a rate of 20%
	msleep(1200);            // Keep moving for 1.2 seconds
	//These commands tilts the robot slightly to the right to allign it with the Material Transport
	motor(0,-20);             // Spins the right motor backwards at a rate of 20%
	motor(1,20);             // Spins the left motor forwards at a rate of 20%
	msleep(800);             // keep turning for 0.8 seconds
	return 0;
}
