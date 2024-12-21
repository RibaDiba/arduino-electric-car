void runFunction5(void (*function)()) {
    unsigned long startTime = millis();
    while (millis() - startTime < 5000)
    {
        function();
        delay(10);
    }

    Serial.println("Finished Running Function");
}
