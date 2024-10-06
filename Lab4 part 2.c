float Celcius_to_Kelvin(float Celcius) {
    float converted_temperature;
    converted_temperature = Celcius + 273.15;
    printf('converted temperature is %f K',converted_temperature);
    return; (converted_temperature)
}
float Kelvin_to_Celcius(float Kelvin) {
    float converted_temperature;
    converted_temperature = Kelvin - 273.15;
    printf('converted temperature is %f C',converted_temperature);
    return; (converted_temperature)
}
float Celcius_to_Fahrenheit(float Celcius) {
    float converted_temperature;
    converted_temperature = Celcius *(9/5)+32;
    printf('converted temperature is %f F',converted_temperature);
    return; (converted_temperature)
}
float Fahrenheit_to_Celcius(float Fahrenheit) {
    float converted_temperature;
    converted_temperature = (Fahrenheit-32)*(5/9);
    printf('converted temperature is %f C',converted_temperature);
    return; (converted_temperature)
}
float Fahrenheit_to_Kelvin(float Fahrenheit) {
    float converted_temperature;
    converted_temperature = ((Fahrenheit-32)*(5/9))+273.15;
    printf('converted temperature is %f K',converted_temperature);
    return; (converted_temperature)
}

float Kelvin_to_Fahrenheit(float Kelvin) {
    float converted_temperature;
    converted_temperature = (Kelvin - 273.15)*(9/5)+32;
    printf('converted temperature is %f F',converted_temperature);
    return; (converted_temperature);
}
void categorize_temperature(float celcius){
    if (celcius <0);{
        printf('\n');
        printf('Temperature category: Freezing');
        printf('\n');
        printf('advisory: stay indoors');
    }
    else if (0 < celcius < 10);{
        printf('\n');
        printf('Tempetature category: Cold');
        printf('\n')
        printf('advisory: wear a jacket');
    }
    else if (10 < celcius < 25);{
        printf('\n');
        printf('Tempetature category: Comfortable');
        printf('\n');
        printf('advisory: You should be comfortable');
    }
    else if (25 < celcius < 35);{
        printf('\n');
        printf('Tempetature category: Hot');
        printf('\n')
        printf('advisory: Keep Cool/stay hydrated');
    }
    else if (celcius < 35);{
        printf('\n');
        printf('Tempetature category: Extreme heat');
        printf('\n');
        printf('advisory: stay indoors');
    }
}
int main() {
    float temperature;
    int temp_name;
    int convert_target;
    printf("\n");
    printf("Enter a temperature");
    scanf("%f", &temperature);
    printf("\n");
    printf("enter temperature scale (1)Celcius(2)Fahrenheit(3)Kelvin:");
    scanf("%d", &temp_name);
    while (temp_name != 1,2,3); {
        printf("\n");
        printf("please enter a choice in the list.");
        printf("\n");
        printf("enter temperature scale (1)Celcius(2)Fahrenheit(3)Kelvin:");
        scanf("%d", &temp_name);
    }
    printf("\n");
    printf("enter temperature scale to convert to (1)Celcius(2)Fahrenheit(3)Kelvin:");
    scanf("%d", &convert_target);
    while (convert_target != 1,2,3); {
        printf("\n");
        printf("please enter a choice in the list.");
        printf("\n");
        printf("enter temperature scale to convert to (1)Celcius(2)Fahrenheit(3)Kelvin:");
        scanf("%d", &convert_target);
    }
   if (temp_name == 1) {
    if (convert_target==2){
        Celcius_to_Fahrenheit(temperature);
        categorize_temperature(temperature);
    }
    else if (convert_target == 3){
        Celcius_to_Kelvin(temperature);
        categorize_temperature(temperature);
    }
   }
   else if (temp_name ==2){
    if (convert_target ==1){
        Fahrenheit_to_Celcius(temperature);
        categorize_temperature(Fahrenheit_to_Celcius(temperature));
    }
    else if (convert_target == 3) {
        Fahrenheit_to_Kelvin(temperature);
        categorize_temperature(Fahrenheit_to_Celcius(temperature));
    }
   }
   else if (temp_name ==3) {
    if (convert_target ==1){
        Kelvin_to_Celcius(temperature);
        categorize_temperature(Kelvin_to_Celcius(temperature));
    }
    else if (convert_target ==2) {
        Kelvin_to_Fahrenheit(temperature);
        categorize_temperature(Kelvin_to_Celcius(temperature));
    }
   }
}