// {dirPin, PWMPin}
int pins[4][2] = {
    {15, 8},
    {2, 2},
    {2, 2},
    {2, 2}
}; 

void setup_pins() {
    for (int r = 0; r < sizeof(pins); r++) {
        for (int c = 0; sizeof(pins[0]); c++) {
            pinMode(pins[r][c], OUTPUT);
        }
    }
}