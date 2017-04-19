/*
 * File:   main.c
 * Author: Ahmed
 *
 * Created on April 4, 2017, 7:40 AM
 */
#include "Library.h"
#include "routines_defs.h"

int main(void) {
#ifdef __XC8
    SYSTEM_Initialize();
#else
    system_init();
#endif
    strRGB_t color_str;
    const routine_item_t* items;
    items = get_bubble_routine();
    bool commcheck = false;
    colors_names_t colorval;
    //routine_item_t news;
    //color_str = get_color_val(green);
    //load_color(&color_str,lowest);
    while(1)
    {        
        commcheck = communicate_with_bubbles();
        if (commcheck){
            colorval = Green;
        }
        else{
           colorval = Red;
        }
        colorval = Olive;
        color_str = get_color_val(colorval);
        load_color(&color_str,lowest); 
//        excute_next_routine_item(items);
//        for(int i=0; i <MAX_ROUTINE_SIZE; i++){
//           news = mentor_bubble_routine[i];
//           news = student_bubble_routine[i];
//           news = treasure_bubble_routine[i];
//           news = paired_bubble_routine[i];
//           news = error_routine[i];
//        }
//        load_color(get_color_val(off),lowest);
    }  

    return 0;
}


