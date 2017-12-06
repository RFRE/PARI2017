/*File generated automatically in ruben-PC by ruben on qua dez  6 10:59:36 WET 2017*/
#ifdef __cplusplus
extern "C" {
#endif
/* callbacks.c */
gboolean on_drawingarea1_expose_event (GtkWidget * widget, GdkEvent * event, gpointer user_data);
gboolean pari_UpdateImageAreas (gpointer data);
/* myf.c */
GdkPixbuf *pari_ConvertOpenCv2Gtk (IplImage * image, int dst_w, int dst_h);
void pari_PerformImageAcquisition (CvCapture * capt);
void pari_RefreshDrawingArea (char *widgetName, IplImage * img);
CvCapture *pari_StartImageAcquisition ();
/* main.c */
int main (int argc, char *argv[]);
#ifdef __cplusplus
}
#endif
