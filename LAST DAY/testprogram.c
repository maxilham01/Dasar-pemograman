 #include <stdio.h>
 typedef struct {
        double mpg;
        long price;
    } car_t;
    
    void saveBin(car_t a_car){   
        FILE car_bin;
        car_bin = fopen("car.bin", "wb");
        fwrite(&a_car,sizeof (car_t),1, car_bin);   
        fclose(car_bin);
    }