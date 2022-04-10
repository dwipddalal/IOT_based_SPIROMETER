// variable initialization: here we shall intiallize the variables
int sensor = 9;
long start_time = 0;
long end_time = 0;
long counter;
long counter_old;
long rps;
long total_time = 0;
long avg_rpm;
void setup()
{
 Serial.begin(9600); 
 pinMode(sensor,INPUT);
}
void loop()
{
 start_time=millis(); // Returns the number of milliseconds passed since the Arduino board began running the current program.
 end_time=start_time+1000; // we shall add thousand since 1s = 1000ms and since millis outputs in milisecond 
 while(millis()<end_time)
 {
   if(digitalRead(sensor))
   {
    counter=counter+1; 
    while(digitalRead(sensor));
   }
 }
    long steps_per_second=counter-counter_old;
    counter_old=counter;

    rps=(steps_per_second/18); // since we took the interval as 1000 so that means rps shall be calculated at 1s and so it is rps that is rounds per second 
    // divided it by 18 since there are 18 hole in the slotted disc
}
