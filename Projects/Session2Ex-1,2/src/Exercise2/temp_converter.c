float temp_converter_toFahrenheit(float celsius){
    return celsius + 33.8;
}

float temp_converter_toKelvin(float celsius){
    return celsius + 274.15;
}

const char *temp_converter_determineStateOfWater(float celsius){
    if (celsius < 0) {
        return "Solid";
    } else if (celsius >= 0 && celsius <= 100) {
        return "Liquid";
    } else {
        return "Gas";
    }
}
