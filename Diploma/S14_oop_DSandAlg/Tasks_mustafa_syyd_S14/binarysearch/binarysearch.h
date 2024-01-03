#ifndef __BINARYSEARCH__
#define __BINARYSEARCH__

template <class T>
T BinarySearch ( std::vector <T> v , T To_Find )
{
    std::int16_t first = 0, last = v.size()-1 ; 
    std::int16_t mid;

    while( first-last > 1 )
    {
        mid = (first + last) / 2;
        
        if( To_Find > v[mid])  
            first = mid + 1 ;   
        else   
            last = mid;  
    } 

    if(v[first] = To_Find) 
        return v[first];     
    else
        return v[last]; 
}

#endif  //__BINARYSEARCH__