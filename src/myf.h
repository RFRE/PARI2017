/**
 *       @file  myf.h
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
 
#ifndef _MYF_H
#define _MYF_H

#if defined (_MAIN_C_)
        GtkBuilder *builderG;
        IplImage *dst_imageG , *src_imageG;
        CvCapture *captureG;
#else
        extern GtkBuilder *builderG;
        extern IplImage *dst_imageG , *src_imageG;
        extern CvCapture *captureG;
#endif

#include <gtk/gtk.h>
#include <cv.h>
#include <highgui.h>

//...

/* prototypes should be within the last lines of header */
#include "prototypes.h"

#endif /* _MYF_H */
