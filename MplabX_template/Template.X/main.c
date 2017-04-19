/*
 * File:   main.c
 * Author: Ahmed
 *
 * Created on April 4, 2017, 7:40 AM
 */
#include "Library.h"
#include "routines_defs.h"
//#define TESTCODE
#define APPLICATION_CODE
int main(void) 
{
#ifdef __XC8
    SYSTEM_Initialize();
#else
    system_init();
#endif


    strRGB_t color_str;
    //const routine_item_t* items;
   //items = get_bubble_routine();
    bool commcheck = false;
    colors_names_t colorval;
    
 routine_item_t mentor_bubble_routine = 
{Blue, Highest, 1000, color_on, 2} ;


 routine_item_t paired_bubble_routine = 
{Red, Highest, 1000, color_on, 2

};
routine_item_t error_routine = 
{White, Highest, 2000, color_flash, 10
};

routine_item_t initialize_bubble_routine = 
{Green, Highest, 2000, color_one_time, 5
};

routine_item_t idle_bubble_routine = 
{Cyan, Highest, 1000, color_on, 2}
;

  routine_item_t red_group_bubble_routine = 
{Red, Highest, 1000, color_off, 2

};
 routine_item_t orange_group_bubble_routine = 
{Red, Highest, 1000, color_off, 2 

};
 routine_item_t yellow_group_bubble_routine = 
{Red, Highest, 1000, color_off, 2

};
 routine_item_t purple_group_bubble_routine= 
{Red, Highest, 1000, color_off, 2

};
 routine_item_t flashback_routine = 
{Red, Highest, 1000, color_off, 2 

};

    
    int i;
    //routine_item_t news;
    //color_str = get_color_val(green);
    //load_color(&color_str,lowest);
    #ifdef TESTCODE
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
#endif

#ifdef APPLICATION_CODE 
   // for (i=0;i<(initialize_bubble_routine.num_of_repeats);i++)
    {
        perform_action(&initialize_bubble_routine);
    }
  //change_routine_array(idle_bubble); 
  
  while (1)
  {
 //excute_next_routine_item(items); 
      perform_action(&idle_bubble_routine);
  
  }
  
#endif
    return 0;
}


