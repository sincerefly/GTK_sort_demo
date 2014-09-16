#include <gtk/gtk.h>
#include "sort.h"

void clean_time(GtkWidget *widget, gpointer BubbleSort_time)
{	
	extern gint count;
	extern buf[5];
	count = 0;
	sprintf(buf, "%d", count);
	gtk_label_set_text(BubbleSort_time, buf);
}

void set_time_one()
{
	extern gint count;
	extern buf[5];
	count = 123;
	sprintf(buf, "%d", count);
	gtk_label_set_text(BubbleSort_time, buf);
}

void set_time_two()
{
	;
}

void set_time_three()
{
	;
}
