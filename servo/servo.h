int servo_open(const char *device);
void servo_capabilities(int servo);
void servo_write(int servo, int command);
int servo_current_voltage(int servo, float *current, float *voltage);