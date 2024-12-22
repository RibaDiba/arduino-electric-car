int pins[4][2] = {
    {15, 8},
    {2, 10},
    {21, 22},
    {16, 17}
};

void setup_pins() {
    int rows = sizeof(pins) / sizeof(pins[0]);
    int cols = sizeof(pins[0]) / sizeof(pins[0][0]);

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            pinMode(pins[r][c], OUTPUT);
            delay(10);
        }
    }
}
