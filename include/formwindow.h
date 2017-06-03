#ifndef __FORMWINDOW_H__
#define __FORMWINDOW_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>
#include <mysql.h>

//frmLogin.c
void L_destroy(GtkWidget *widget,gpointer data);
void L_btn1_on_clicked(GtkWidget *widget,gpointer data);
void L_btn2_on_clicked(GtkWidget *widget,gpointer data);
void loginInit();

//frmRegister.c
void R_destroy(GtkWidget *widget,gpointer data);
void R_show(GtkWidget *widget,gpointer data);
void R_Insert(GtkWidget *widget,gpointer data);
void registerInit();

//frmMail.c
void M_init_list();
void M_add_to_list(gchar *str);
void M_add_to_list2(gchar *str);
void M_add_list();
void M_init_menu();
void M_toolbtn2_on_clicked(GtkWidget *widget,gpointer data);
void M_menuitem12_on_clicked(GtkWidget *widget,gpointer data);
void M_destroy(GtkWidget *widget,gpointer data);
void M_list_selection1_on_changed(GtkWidget *widget, gpointer data);
void mailInit();

//frmEdit.c
void E_init_list();	//��ϵ������
void E_add_to_list(gchar *str);	//�����ϵ��
void E_add_list();	//
void E_init_menu();	//�����˵�
void E_destroy(GtkWidget *widget,gpointer data);	//�˳�
void E_list_selection_on_changed(GtkWidget *widget, gpointer data);	//����ϵ���л��ռ���
void editInit();	//�����༭
#endif