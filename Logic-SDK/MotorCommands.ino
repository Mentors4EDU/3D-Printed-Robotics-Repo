
void setup()
{
	// initialize serial communication at 9600 bits per second:
	Serial.begin(9600);
	MotorL.attach(LEFT_MOTOR_PWM_PIN);      // assigns Left motor PWM signal on pin 
     // 10 to the servo object
	MotorR.attach(RIGHT_MOTOR_PWM_PIN);  // assigns Right motor PWM signal on 
    // pin 11 to the servo object
}

/* *********************************************************************** */
/* Main Loop                                                                                    */
/* *********************************************************************** */

void loop()
{
	// simple drive sequence to test correct motor functionality

// drive forward at half speed for 5 seconds
	motorCommand(LEFT, 100);
	motorCommand(RIGHT, 84);
	delay(5050);
	motorCommand(LEFT, 0);
	motorCommand(RIGHT, 0);
	delay(3000);
	motorCommand(RIGHT, 87);
	motorCommand(LEFT, -100);
	delay(1300);
	motorCommand(LEFT, 0);
	motorCommand(RIGHT, 0);
	delay(3000);
	motorCommand(LEFT, 100);
	motorCommand(RIGHT, 84);
	delay(5220);
	motorCommand(LEFT, 0);
	motorCommand(RIGHT, 0);
	delay(3000);
	motorCommand(RIGHT, 87);
	motorCommand(LEFT, -100);
	delay(1300);
	motorCommand(LEFT, 0);
	motorCommand(RIGHT, 0);
	while(1);

}
