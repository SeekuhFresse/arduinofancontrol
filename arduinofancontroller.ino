// Define the PWM pin for the fan
#define FAN_PIN 9

// Define the minimum and maximum PWM values
#define MIN_PWM 0
#define MAX_PWM 255

// Define the minimum and maximum temperature thresholds in Celsius
#define MIN_TEMP 40
#define MAX_TEMP 80

// Define a variable to store the temperature
float temp;

// Define a variable to store the PWM value
int pwm;

void setup() {
  // Initialize the serial communication with the Pi
  Serial.begin(9600);

  // Initialize the PWM pin as an output
  pinMode(FAN_PIN, OUTPUT);
}

void loop() {
  // Check if there is data available from the serial port
  if (Serial.available() > 0) {
    // Read the temperature as a float
    temp = Serial.parseFloat();

    // Map the temperature to the PWM range
    pwm = map(temp, MIN_TEMP, MAX_TEMP, MIN_PWM, MAX_PWM);

    // Constrain the PWM value to the valid range
    pwm = constrain(pwm, MIN_PWM, MAX_PWM);

    // Write the PWM value to the fan pin
    analogWrite(FAN_PIN, pwm);
  }
}
