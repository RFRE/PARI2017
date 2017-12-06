/**
 *       @file  main.c
 *      @brief  Breve Descrição
 *
 * Descrição mais detalhada do ficheiro que até poderiam incluir links para imagens etc.
 *
 *     @author  Ruben Esteves, email@ua.pt
 *
 *   @internal
 *     Created  06-dez-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, Ruben Esteves
 *
 * =====================================================================================
 */
 
 #define _MAIN_C_
 
 #include "myf.h"
 
int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

	// ...

    g_timeout_add(30, (GSourceFunc) pari_UpdateImageAreas, (gpointer) NULL);
    captureG=pari_StartImageAcquisition();

    /* start the event loop */
    gtk_main();

    cvReleaseCapture(&captureG);             //Release capture device.
    cvReleaseImage(&dst_imageG);             //Release image (free pointer when no longer used)
    cvReleaseImage(&src_imageG);             //Release image (free pointer when no longer used).
    return 0;
}
