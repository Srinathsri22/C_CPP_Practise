#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    //data from .wav file without header..
    unsigned char wav_arr[] = { 
                0x8E,0xFF,0x17,0x00,0x0F,0xFF,0x03,0x00,0xE3,0xFE,0xE3,0xFF,0x93,0xFF,0x2C,0x00,0xCE,0xFF,0x0C,0x00,0x4D,0x00,0x14,
                0x00,0xC5,0x00,0x43,0x00,0x65,0x00,0x76,0x00,0x78,0x00,0x63,0x00,0x39,0x00,0xE3,0xFF,0xB8,0x00,0xE7,0xFF,0x3D,0x00,
                0xB4,0xFF,0xBB,0xFF,0x8B,0xFF,0x31,0x00,0xA8,0xFF,0xE4,0xFF,0xC0,0xFF,0x85,0xFF,0x14,0x00,0xC6,0xFF,0xD8,0xFF,0xDE,
                0xFF,0xED,0xFF,0xE0,0xFF,0x21,0x00,0xE7,0xFF,0x00,0x00,0x92,0xFF,0x10,0x00,0x98,0xFF,0xE0,0xFF,0xD4,0xFF,0x43,0x00,
                0x92,0xFF,0x5F,0x00,0xAE,0xFF,0x62,0x00,0xB7,0xFF,0x2D,0x00,0x91,0xFF,0xD3,0xFF,0xC1,0xFF,0x05,0x00,0x29,0x00,0xD4,
                0xFF,0xA0,0x00,0xC3,0xFF,0x80,0x00,0xD4,0xFF,0xE2,0x00,0x3D,0x00,0x1E,0x00,0x4B,0x00,0xD6,0xFF,0xD2,0xFF,0x51,0x00,
                0xFE,0xFF,0x44,0x00,0xDE,0xFF,0xB2,0xFF,0x80,0xFF,0xF4,0xFF,0xA4,0xFF,0x92,0xFF,0x94,0xFF,0xC1,0xFE,0xAE,0xFF,0x80,
                0xFF,0xE6,0xFF,0xAD,0xFF,0x0B,0x00,0x15,0x00,0x82,0x00,0x16,0x00,0x96,0x00,0x25,0x00,0x63,0x00,0x3B,0x00,0xDF,0xFF,
                0xD5,0xFF,0xBA,0xFF,0xE6,0xFF,0xF1,0xFF,0xE6,0xFF,0xD1,0xFF,0xC2,0xFF,0x90,0xFF,0xEB,0xFF,0xDF,0xFF,0x24,0xFF,0xE7,
                0xFF,0xA4,0xFF,0xF4,0xFF,0x78,0x00,0x34,0x00,0xC1,0x00,0x12,0x00,0x38,0x01,0x24,0x00,0x53,0x00,0x97,0xFF,0xAD,0xFF,
                0xA6,0xFF,0x0D,0xFF,0xB2,0xFF,0xFB,0xFE,0xAB,0xFF,0x57,0xFF,0xF6,0xFF,0x94,0xFF,0xC3,0xFF,0x5E,0x00,0xD1,0xFF,0xA1,
                0x00,0x7C,0x00,0xCA,0x00,0x5D,0x00,0x6A,0x01,0x1B,0x00,0xAE,0x01,0x2F,0x00,0x7C,0x00,0x49,0x00,0x7E,0xFF,0xE4,0xFF,
                0xEA,0xFE,0x6D,0xFF,0x52,0xFE,0xC2,0xFF,0x45,0xFE,0xF3,0xFF,0xA6,0xFE,0xF6,0xFF,0x51,0x00,0x39,0x00,0xF5,0x00,0x77,
                0x00,0x17,0x01,0x5A,0x00,0x1B,0x01,0x5A,0x00,0xBB,0x00,0x38,0x00,0xF0,0x00,0x0B,0x00,0x63,0x00,0x08,0x00,0x95,0xFF,
                0xD8,0xFF,0x21,0xFF,0xA1,0xFF,0x17,0xFF,0xB2,0xFF,0x4A,0xFF,0xAA,0xFF,0xFF,0xFE,0xA1,0xFF,0xB3,0xFF,0x45,0xFF,0x17,
                0x00,0x6A,0xFF,0xDB,0xFF,0xFB,0xFF,0xAB,0x00,0xF7,0xFF,0xEC,0x00,0x22,0x00,0x05,0x01,0x35,0x00,0xEA,0x00,0x91,0x00,
                0xFC,0x00,0xA7,0x00,0x39,0x00,0x13,0x00,0x35,0xFF,0xD8,0xFF,0x6A,0xFE,0xA1,0xFF,0xC4,0xFD,0x52,0xFF,0xBC,0xFE,0xB0,
                0xFF,0x34,0xFF,0x8B,0xFF,0x26,0x00,0x27,0x00,0xBC,0x00,0x31,0x00,0x75,0x01,0x57,0x00,0x3F,0x02,0xDF,0x00,0x89,0x01,
                0x6A,0x00,0xB6,0x00,0x47,0x00,0x06,0x00,0xA3,0xFF,0x4F,0xFF,0x8B,0xFF,0xE2,0xFE,0xE8,0xFF,0xB8,0xFE,0x9A,0xFF,0x78,
                0xFF,0xB6,0xFF
                };
    //finding the number of elements in an array
    n = sizeof(wav_arr)/sizeof(char);
    __uint8_t mod_arr[n];
    //printf("The size of the array is %d\n",n);
    for(int i=0;i<n;i=i+2)
    {
        //Storing the first 8 bit of data in the 16 bit integer
        __uint16_t data = wav_arr[i];

        //Left shifting the first 8 bit
        data = data<<8;

        //storing the next 8 bit of data in the 16 bit integer
        data = data  | wav_arr[i+1];
        //findDFT(data);
        data = data * 0.5;

        //Storing the first part in an another array
        mod_arr[i] = data>>8;

        //Storing the next part in the array
        mod_arr[i+1] = ((data << 8) >> 8);  

        printf("%x %x\n", mod_arr[i], mod_arr[i+1]);
    }
    return 0;
    
}