// Created on Mon February 10 2020

int main()
{
	
    int rmotor=0;
    int lmotor=3;
    int time=1550;
    
    
 while(time>0)
  {
      time = time-1;
    if(analog(5) >3100)
    {
     motor(rmotor,95);
        motor(lmotor,75);
    }
      else
      {
          motor(rmotor,75);
          motor(lmotor,95);
      }
   }
    
    set_servo_position(0,710);
    set_servo_position(3,1700);
    msleep(300);
    motor(rmotor,100);
    motor(lmotor,90);
    msleep(400);
    set_servo_position(0,1400);
    msleep(300);
    set_servo_position(0,2047);
    msleep(300);
    motor(rmotor,10);
    motor(lmotor,10);
          msleep(500);
          set_servo_position(3,800);
          msleep(1000);
	
	
	
	return 0;
}
