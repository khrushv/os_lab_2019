#include "find_min_max.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = INT_MAX;
  min_max.max = INT_MIN;
  for(int i = begin, current_element; i < end; i++)
  {
          current_element = *(array + i);
          if(current_element < min_max.min)
                  min_max.min = current_element;
          if(current_element > min_max.max)
                  min_max.max = current_element;
  }
  return min_max;
}




