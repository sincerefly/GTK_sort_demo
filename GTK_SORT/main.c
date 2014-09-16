/*
* this is a c program, use the GTK+2.0 to build the window, show the sort  
*/

#include <gtk/gtk.h>
#include <malloc.h>

gint count = 0;
char buf[8];

void clean_time(GtkWidget *widget, gpointer obj)
{	
	count = 0;
	sprintf(buf, "%d", count);
	gtk_label_set_text(obj, buf);
}

void set_time_1000_one(GtkWidget *widget, gpointer obj)
{
	int a[1000],i;
	SrandCreate(a, 1000);
	unsigned long time;
	time = Bubble_Sort(a, 0, 1000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_1000_two(GtkWidget *widget, gpointer obj)
{
	int a[1000],i;
	SrandCreate(a, 1000);
	unsigned long time;
	time = Selection_Sort(a, 0, 1000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_1000_three(GtkWidget *widget, gpointer obj)
{
	int a[1000],i;
	SrandCreate(a, 1000);
	unsigned long time;
	time = StrIn_Sort(a, 0, 1000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_1000_four(GtkWidget *widget, gpointer obj)
{
	int a[1000],i;
	SrandCreate(a, 1000);
	unsigned long time;
	time = Quick_Sort(a, 0, 1000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_1000_five(GtkWidget *widget, gpointer obj)
{
	int a[1000],i;
	SrandCreate(a, 1000);
	unsigned long time;
	time = Heap_Sort(a, 0, 1000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_1000_six(GtkWidget *widget, gpointer obj)
{
	int a[1000],i;
	SrandCreate(a, 1000);
	unsigned long time;
	time = Hill_Sort(a, 0, 1000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
//-------------------------------------------------------------------------------------
void set_time_10000_one(GtkWidget *widget, gpointer obj)
{
	int a[10000],i;
	SrandCreate(a, 10000);
	unsigned long time;
	time = Bubble_Sort(a, 0, 10000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_10000_two(GtkWidget *widget, gpointer obj)
{
	int a[10000],i;
	SrandCreate(a, 10000);
	unsigned long time;
	time = Selection_Sort(a, 0, 10000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_10000_three(GtkWidget *widget, gpointer obj)
{
	int a[10000],i;
	SrandCreate(a, 10000);
	unsigned long time;
	time = StrIn_Sort(a, 0, 10000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_10000_four(GtkWidget *widget, gpointer obj)
{
	int a[10000],i;
	SrandCreate(a, 10000);
	unsigned long time;
	time = Quick_Sort(a, 0, 10000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_10000_five(GtkWidget *widget, gpointer obj)
{
	int a[10000],i;
	SrandCreate(a, 10000);
	unsigned long time;
	time = Heap_Sort(a, 0, 10000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_10000_six(GtkWidget *widget, gpointer obj)
{
	int a[10000],i;
	SrandCreate(a, 10000);
	unsigned long time;
	time = Hill_Sort(a, 0, 10000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}

//---------------------------------------------------------------------------------------
void set_time_30000_one(GtkWidget *widget, gpointer obj)
{
	int a[30000],i;
	SrandCreate(a, 30000);
	unsigned long time;
	time = Bubble_Sort(a, 0, 30000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_30000_two(GtkWidget *widget, gpointer obj)
{
	int a[30000],i;
	SrandCreate(a, 30000);
	unsigned long time;
	time = Selection_Sort(a, 0, 30000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_30000_three(GtkWidget *widget, gpointer obj)
{
	int a[30000],i;
	SrandCreate(a, 30000);
	unsigned long time;
	time = StrIn_Sort(a, 0, 30000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_30000_four(GtkWidget *widget, gpointer obj)
{
	int a[30000],i;
	SrandCreate(a, 30000);
	unsigned long time;
	time = Quick_Sort(a, 0, 30000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_30000_five(GtkWidget *widget, gpointer obj)
{
	int a[30000],i;
	SrandCreate(a, 30000);
	unsigned long time;
	time = Heap_Sort(a, 0, 30000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}
void set_time_30000_six(GtkWidget *widget, gpointer obj)
{
	int a[30000],i;
	SrandCreate(a, 30000);
	unsigned long time;
	time = Hill_Sort(a, 0, 30000);
	sprintf(buf, "%ld", time);
	gtk_label_set_text(obj, buf);
}

int main(int argc, char *argv[]) 
{

	GtkWidget *BubbleSort, *Bu_t;       //冒泡排序
	GtkWidget *SelectionSort, *Se_t;    //选择排序
	GtkWidget *StrInSort, *St_t;        //插入排序
	GtkWidget *QuickSort, *Qu_t;        //快速排序
	GtkWidget *HeapSort, *He_t;         //  堆排序
	GtkWidget *HillSort, *Hi_t;         //希尔排序
	GtkWidget *Tishi;                   //提示
	GtkWidget *window;
	GtkWidget *frame;
	GtkWidget *clean, *BL1, *BL2, *BL3;

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_default_size(GTK_WINDOW(window), 290, 260);
	gtk_window_set_title(GTK_WINDOW(window), "排序算法比较");

	frame = gtk_fixed_new();
	gtk_container_add(GTK_CONTAINER(window), frame);

	clean = gtk_button_new_with_label("clean");
	gtk_widget_set_size_request(clean, 60, 30);
	gtk_fixed_put(GTK_FIXED(frame), clean, 10, 10);

	BL1 = gtk_button_new_with_label("1000");
	gtk_widget_set_size_request(BL1, 60, 30);
	gtk_fixed_put(GTK_FIXED(frame), BL1, 80, 10);

	BL2 = gtk_button_new_with_label("10000");
	gtk_widget_set_size_request(BL2, 60, 30);
	gtk_fixed_put(GTK_FIXED(frame), BL2, 150, 10);

	BL3 = gtk_button_new_with_label("30000");
	gtk_widget_set_size_request(BL3, 60, 30);
	gtk_fixed_put(GTK_FIXED(frame), BL3, 220, 10);
//按钮和标签
//---------------------------------------------------------------------------------------------------------
	BubbleSort = gtk_label_new("(一) 冒泡排序:");
	gtk_fixed_put(GTK_FIXED(frame), BubbleSort, 20, 50);	

	Bu_t = gtk_label_new("100");
	gtk_fixed_put(GTK_FIXED(frame), Bu_t, 150, 50);

	SelectionSort = gtk_label_new("(二) 选择排序:");
	gtk_fixed_put(GTK_FIXED(frame), SelectionSort, 20, 80);	

	Se_t = gtk_label_new("100");
	gtk_fixed_put(GTK_FIXED(frame), Se_t, 150, 80);

	StrInSort = gtk_label_new("(三) 插入排序:");
	gtk_fixed_put(GTK_FIXED(frame), StrInSort, 20, 110);	

	St_t = gtk_label_new("100");
	gtk_fixed_put(GTK_FIXED(frame), St_t, 150, 110);

	QuickSort = gtk_label_new("(四) 快速排序:");
	gtk_fixed_put(GTK_FIXED(frame), QuickSort, 20, 140);	

	Qu_t = gtk_label_new("100");
	gtk_fixed_put(GTK_FIXED(frame), Qu_t, 150, 140);

	HeapSort = gtk_label_new("(五)   堆排序:");
	gtk_fixed_put(GTK_FIXED(frame), HeapSort, 20, 170);	

	He_t = gtk_label_new("100");
	gtk_fixed_put(GTK_FIXED(frame), He_t, 150, 170);

	HillSort = gtk_label_new("(六) 希尔排序:");
	gtk_fixed_put(GTK_FIXED(frame), HillSort, 20, 200);	

	Hi_t = gtk_label_new("100");
	gtk_fixed_put(GTK_FIXED(frame), Hi_t, 150, 200);
//---------------------------------------------------------------------------------------------------------
	Tishi = gtk_label_new("各算法随机数排序花费时间 单位为微秒");
	gtk_fixed_put(GTK_FIXED(frame), Tishi, 15, 230);

	gtk_widget_show_all(window);

//关闭事件响应
	g_signal_connect(window, "destroy",G_CALLBACK(gtk_main_quit), NULL);
//单击clean的响应
//---------------------------------------------------------------------------------------------------------
	g_signal_connect(clean, "clicked",G_CALLBACK(clean_time), Bu_t);
	g_signal_connect(clean, "clicked",G_CALLBACK(clean_time), Se_t);
	g_signal_connect(clean, "clicked",G_CALLBACK(clean_time), St_t);
	g_signal_connect(clean, "clicked",G_CALLBACK(clean_time), Qu_t);
	g_signal_connect(clean, "clicked",G_CALLBACK(clean_time), He_t);
	g_signal_connect(clean, "clicked",G_CALLBACK(clean_time), Hi_t);
//单击1000的响应
//---------------------------------------------------------------------------------------------------------
	g_signal_connect(BL1, "clicked",G_CALLBACK(set_time_1000_one), Bu_t);
	g_signal_connect(BL1, "clicked",G_CALLBACK(set_time_1000_two), Se_t);
	g_signal_connect(BL1, "clicked",G_CALLBACK(set_time_1000_three), St_t);
	g_signal_connect(BL1, "clicked",G_CALLBACK(set_time_1000_four), Qu_t);
	g_signal_connect(BL1, "clicked",G_CALLBACK(set_time_1000_five), He_t);
	g_signal_connect(BL1, "clicked",G_CALLBACK(set_time_1000_six), Hi_t);

//单击10000的响应
//---------------------------------------------------------------------------------------------------------
	g_signal_connect(BL2, "clicked",G_CALLBACK(set_time_10000_one), Bu_t);
	g_signal_connect(BL2, "clicked",G_CALLBACK(set_time_10000_two), Se_t);
	g_signal_connect(BL2, "clicked",G_CALLBACK(set_time_10000_three), St_t);
	g_signal_connect(BL2, "clicked",G_CALLBACK(set_time_10000_four), Qu_t);
	g_signal_connect(BL2, "clicked",G_CALLBACK(set_time_10000_five), He_t);
	g_signal_connect(BL2, "clicked",G_CALLBACK(set_time_10000_six), Hi_t);

//单击30000的响应
//---------------------------------------------------------------------------------------------------------
	g_signal_connect(BL3, "clicked",G_CALLBACK(set_time_30000_one), Bu_t);
	g_signal_connect(BL3, "clicked",G_CALLBACK(set_time_30000_two), Se_t);
	g_signal_connect(BL3, "clicked",G_CALLBACK(set_time_30000_three), St_t);
	g_signal_connect(BL3, "clicked",G_CALLBACK(set_time_30000_four), Qu_t);
	g_signal_connect(BL3, "clicked",G_CALLBACK(set_time_30000_five), He_t);
	g_signal_connect(BL3, "clicked",G_CALLBACK(set_time_30000_six), Hi_t);


	//g_signal_connect(minus, "clicked",G_CALLBACK(decrease), label);

	gtk_main();
	
	
	return 0;
}
