//Arduino code for Moving Stepper motor and connecting serially with Raspberry pie 
//  by Khangesh Matte.



#include <AccelStepper.h> 	  // Use the stepper library

#define motorFDir 2           // direction pin for front face
#define motorFStep 3          // Step pin for front face
#define motorBDir 4           // direction pin for Back face
#define motorBStep 5          // step pin for Back face
#define motorLDir 6           // direction pin for Left face
#define motorLStep 7		  // step pin for Left face
#define motorRDir 8           // direction pin for Right face
#define motorRStep 9          // Step pin for Right face
#define motorUDir 10		  // direction pin for upper face
#define motorUStep 11		  // step pin for upper face
#define motorDDir 12		  // direction pin for down face
#define motorDStep 13         // step pin for down face

#define perSpinStepCW 50      // Roatate 90 dgree clockwise
#define perSpinStepCCW -50    // Roatate 90 degree anticlockwise
#define motorInterfaceType 1
#define motorSpeedCW 500      // Speed for rotate the motor CW
#define motorSpeedCCW -500    //  Speed for rotate the motor CCW


 //----* Initiliase the motor State ------*//
AccelStepper stepperF = AccelStepper(motorInterfaceType, motorFStep, motorFDir); 
AccelStepper stepperB = AccelStepper(motorInterfaceType, motorBStep, motorBDir);
AccelStepper stepperL = AccelStepper(motorInterfaceType, motorLStep, motorLDir);
AccelStepper stepperR = AccelStepper(motorInterfaceType, motorRStep, motorRDir);
AccelStepper stepperU = AccelStepper(motorInterfaceType, motorUStep, motorUDir);
AccelStepper stepperD = AccelStepper(motorInterfaceType, motorDStep, motorDDir);


String comdata = "";           // To get The data serially from raspberry Pi-3

//----* Functions for Rotating Stepper motor clockwise and Anticlockwise ----*//
 
void spinFMotorCW()           
{ 
  // Set the current position to 0:
  stepperF.setCurrentPosition(0);
  while(stepperF.currentPosition() != perSpinStepCW)
  {
    stepperF.setSpeed(motorSpeedCW);
    stepperF.runSpeed();
  }
}

void spinFMotorCCW()
{ 
  // Set the current position to 0:
  stepperF.setCurrentPosition(0);
  while(stepperF.currentPosition() != perSpinStepCCW)
  {
    stepperF.setSpeed(motorSpeedCCW);
    stepperF.runSpeed();
  }
}

void spinFMotor2CW()
{ 
  // Set the current position to 0:
  stepperF.setCurrentPosition(0);018
  while(stepperF.currentPosition() != (perSpinStepCCW*2))  // Roatate motor for 180 degree
  {
    stepperF.setSpeed(motorSpeedCCW);
    stepperF.runSpeed();
  }
}

void spinBMotorCW()
{ 
  // Set the current position to 0:
  stepperB.setCurrentPosition(0);
  while(stepperB.currentPosition() != perSpinStepCW)
  {
    stepperB.setSpeed(motorSpeedCW);
    stepperB.runSpeed();
  }
}

void spinBMotorCCW()
{ 
  // Set the current position to 0:
  stepperB.setCurrentPosition(0);
  while(stepperB.currentPosition() != perSpinStepCCW)
  {
    stepperB.setSpeed(motorSpeedCCW);
    stepperB.runSpeed();
  }
}

void spinBMotor2CW()
{ 
  // Set the current position to 0:
  stepperB.setCurrentPosition(0);
  while(stepperB.currentPosition() != (perSpinStepCW*2))  // Roatate motor for 180 degree
  {
    stepperB.setSpeed(motorSpeedCW);
    stepperB.runSpeed();
  }
}

void spinLMotorCW()
{ 
  // Set the current position to 0:
  stepperL.setCurrentPosition(0);
  while(stepperL.currentPosition() != perSpinStepCW)
  {
    stepperL.setSpeed(motorSpeedCW);
    stepperL.runSpeed();
  }
}

void spinLMotorCCW()
{ 
  // Set the current position to 0:
  stepperL.setCurrentPosition(0);
  while(stepperL.currentPosition() != perSpinStepCCW)
  {
    stepperL.setSpeed(motorSpeedCCW);
    stepperL.runSpeed();
  }
}

void spinLMotor2CW()
{ 
  // Set the current position to 0:
  stepperL.setCurrentPosition(0);
  while(stepperL.currentPosition() != (perSpinStepCW*2  // Roatate motor for 180 degree
  {
    stepperL.setSpeed(motorSpeedCW);
    stepperL.runSpeed();
  }
}

void spinRMotorCW()
{ 
  // Set the current position to 0:
  stepperR.setCurrentPosition(0);
  while(stepperR.currentPosition() != perSpinStepCW)
  {
    stepperR.setSpeed(motorSpeedCW);
    stepperR.runSpeed();
  }
}

void spinRMotorCCW()
{ 
  // Set the current position to 0:
  stepperR.setCurrentPosition(0);
  while(stepperR.currentPosition() != perSpinStepCCW)
  {
    stepperR.setSpeed(motorSpeedCCW);
    stepperR.runSpeed();
  }
}

void spinRMotor2CW()
{ 
  // Set the current position to 0:
  stepperR.setCurrentPosition(0);
  while(stepperR.currentPosition() != (perSpinStepCW*2))  // Roatate motor for 180 degree
  {
    stepperR.setSpeed(motorSpeedCW);
    stepperR.runSpeed();
  }
}

void spinUMotorCW()
{ 
  // Set the current position to 0:
  stepperU.setCurrentPosition(0);
  while(stepperU.currentPosition() != perSpinStepCW)
  {
    stepperU.setSpeed(motorSpeedCW);
    stepperU.runSpeed();
  }
}

void spinUMotorCCW()
{ 
  // Set the current position to 0:
  stepperU.setCurrentPosition(0);
  while(stepperU.currentPosition() != perSpinStepCCW)
  {
    stepperU.setSpeed(motorSpeedCCW);
    stepperU.runSpeed();
  }
}

void spinUMotor2CW()
{ 
  // Set the current position to 0:
  stepperU.setCurrentPosition(0);
  while(stepperU.currentPosition() != (perSpinStepCW*2))    // Roatate motor for 180 degree
  {
    stepperU.setSpeed(motorSpeedCW);
    stepperU.runSpeed();
  }
}

void spinDMotorCW()
{ 
  // Set the current position to 0:
  stepperD.setCurrentPosition(0);
  while(stepperD.currentPosition() != perSpinStepCW)
  {
    stepperD.setSpeed(motorSpeedCW);
    stepperD.runSpeed();
  }
}

void spinDMotorCCW()
{ 
  // Set the current position to 0:
  stepperD.setCurrentPosition(0);
  while(stepperD.currentPosition() != perSpinStepCCW)
  {
    stepperD.setSpeed(motorSpeedCCW);
    stepperD.runSpeed();
  }
}

void spinDMotor2CW()
{ 
  // Set the current position to 0:
  stepperD.setCurrentPosition(0);
  while(stepperD.currentPosition() != (perSpinStepCW*2))    // Roatate motor for 180 degree
  {
    stepperD.setSpeed(motorSpeedCW);
    stepperD.runSpeed();
  }
}
//--* Chek the strings fron the string array and Rotate acoordingly 90 degree , -90 degree, 180 dgree.--*//
void checkEachCase(String str){
  if(str == "F")
  {
    spinFMotorCW();
    }
    else if(str == "F'")
    {
      spinFMotorCCW();
      }
      else if(str == "F2")
    {
      spinFMotor2CW();
      }
      else if(str == "B")
    {
      spinBMotorCW();
      }
      else if(str == "B'")
    {
      spinBMotorCCW();
      }
      else if(str == "B2")
    {
      spinBMotor2CW();
      }
      else if(str == "L")
    {
      spinLMotorCW();
      }
      else if(str == "L'")
    {
      spinLMotorCCW();
      }
      else if(str == "L2")
    {
      spinLMotor2CW();
      }
      else if(str == "R")
    {
      spinRMotorCW();
      }
      else if(str == "R'")
    {
      spinRMotorCCW();
      }
      else if(str == "R2")
    {
      spinRMotor2CW();
      }
      else if(str == "U")
    {
      spinUMotorCW();
      }
      else if(str == "U'")
    {
      spinUMotorCCW();
      }
       else if(str == "U2")
    {
      spinUMotor2CW();
      }
      else if(str == "D")
    {
      spinDMotorCW();
      }
      else if(str == "D'")
    {
      spinDMotorCCW();
      }
      else if(str == "D2")
    {
      spinDMotor2CW();
      }
}
 
void checkStringCase(String str[])
{
  for(int i=0;i<40;i++)
  {
    if(str[i] != "")
    {
      checkEachCase(str[i]);
      delay(10000);
     }
      else
      break;
    }
}

void SerialEvent()
{
  String readFromGPIO[40];  // string array to keep each step from GPIO
  //read string form GIOP 
  while (Serial.available() > 0)  
    {
        comdata += char(Serial.read());  // use the loop to read the data sending by raspberry pi-3
        
        delay(2);
    }

    //change string into string array
    if (comdata.length() > 0)
    {   
       
        int pos = 0;     
        for(int i=0;i<comdata.length();i++)
        {
            if(comdata[i] != ',')//','as the separator
            {
              readFromGPIO[pos] += comdata[i];
              Serial.println(readFromGPIO[pos] );                                   
            }
            else
            {
              pos++;
            }
        }
        
       //send the string back to resberry pi

         Serial.println(comdata); 

       //run the solution of rubik cube
        checkStringCase(readFromGPIO);

      //clean the string array
      //memset(readFromGPIO,'\0',sizeof(readFromGPIO));
      //clean the char
        comdata = "";
    }
}


//--set Maximum speed --//
void setup() {
  stepperF.setMaxSpeed(1000);
  stepperB.setMaxSpeed(1000);
  stepperL.setMaxSpeed(1000);
  stepperR.setMaxSpeed(1000);
  stepperU.setMaxSpeed(1000);
  stepperD.setMaxSpeed(1000);
   

  Serial.begin(9600); //initialize with baud rate of 9600 bps
}

void loop() {
  
  delay(10000);
  SerialEvent();
  
  
}
