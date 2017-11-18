/********************************************************************************
** Form generated from reading UI file 'MainGui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINGUI_H
#define UI_MAINGUI_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainGui
{
public:
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *Page1;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *b_pritruce;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QPushButton *b_setting;
    QPushButton *b_pifu;
    QWidget *page_3;
    QPushButton *b_Return1;
    QWidget *page_4;
    QPushButton *b_Return2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_min;
    QPushButton *b_close;
    QStackedWidget *stackedWidget1;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QWebEngineView *webEngineView;
    QWidget *page_2;

    void setupUi(QDialog *MainGui)
    {
        if (MainGui->objectName().isEmpty())
            MainGui->setObjectName(QStringLiteral("MainGui"));
        MainGui->resize(959, 520);
        horizontalLayout_2 = new QHBoxLayout(MainGui);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(MainGui);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(186, 16777215));
        stackedWidget->setLineWidth(1);
        Page1 = new QWidget();
        Page1->setObjectName(QStringLiteral("Page1"));
        verticalLayout_2 = new QVBoxLayout(Page1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(1, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        b_pritruce = new QPushButton(Page1);
        b_pritruce->setObjectName(QStringLiteral("b_pritruce"));
        b_pritruce->setMinimumSize(QSize(50, 50));
        b_pritruce->setMaximumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(b_pritruce);


        verticalLayout_2->addLayout(horizontalLayout_3);

        pushButton_3 = new QPushButton(Page1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(186, 38));
        pushButton_3->setMaximumSize(QSize(40, 38));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(85, 85, 85);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(85, 85, 85);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(204, 204, 204);\n"
"	border-top: 1px solid rgb(204, 204, 204);\n"
"	border-right: 1px solid rgb(204, 204, 204);\n"
"	border-bottom: 1px solid rgb(204, 204, 204"
                        ");\n"
"	border-left: 1px solid rgb(204, 204, 204);\n"
"	margin: 0px 0px 0px 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(85, 85, 85) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wr"
                        "ap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"background-color: rgb(152, 225, 101);\n"
"\n"
"}"));
        pushButton_3->setCheckable(true);
        pushButton_3->setChecked(false);
        pushButton_3->setAutoExclusive(true);
        pushButton_3->setAutoDefault(false);
        pushButton_3->setFlat(false);

        verticalLayout_2->addWidget(pushButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_5 = new QPushButton(Page1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(186, 38));
        pushButton_5->setMaximumSize(QSize(40, 38));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(85, 85, 85);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(85, 85, 85);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(204, 204, 204);\n"
"	border-top: 1px solid rgb(204, 204, 204);\n"
"	border-right: 1px solid rgb(204, 204, 204);\n"
"	border-bottom: 1px solid rgb(204, 204, 204"
                        ");\n"
"	border-left: 1px solid rgb(204, 204, 204);\n"
"	margin: 0px 0px 0px 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(85, 85, 85) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wr"
                        "ap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"background-color: rgb(152, 225, 101);\n"
"\n"
"}"));
        pushButton_5->setCheckable(true);
        pushButton_5->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButton_4 = new QPushButton(Page1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(186, 38));
        pushButton_4->setMaximumSize(QSize(40, 38));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(85, 85, 85);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(85, 85, 85);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(204, 204, 204);\n"
"	border-top: 1px solid rgb(204, 204, 204);\n"
"	border-right: 1px solid rgb(204, 204, 204);\n"
"	border-bottom: 1px solid rgb(204, 204, 204"
                        ");\n"
"	border-left: 1px solid rgb(204, 204, 204);\n"
"	margin: 0px 0px 0px 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(85, 85, 85) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wr"
                        "ap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"background-color: rgb(152, 225, 101);\n"
"\n"
"}"));
        pushButton_4->setCheckable(true);
        pushButton_4->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        b_setting = new QPushButton(Page1);
        b_setting->setObjectName(QStringLiteral("b_setting"));
        b_setting->setCursor(QCursor(Qt::PointingHandCursor));
        b_setting->setStyleSheet(QLatin1String("QPushButton{\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgb(0, 167, 222);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(3, 129, 170);\n"
"	border-top: 1px solid rgb(3, 129, 170);\n"
"	border-right: 1px solid rgb(3, 129, 170);\n"
"	border-bottom: 1px solid rgb(3, 129, 170);\n"
""
                        "	border-left: 1px solid rgb(3, 129, 170);\n"
"	margin: 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(255, 255, 255) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wrap: normal;\n"
"	b"
                        "ox-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"\n"
"	background-color: rgb(0, 190, 231);\n"
"\n"
"}"));

        verticalLayout_2->addWidget(b_setting);

        b_pifu = new QPushButton(Page1);
        b_pifu->setObjectName(QStringLiteral("b_pifu"));
        b_pifu->setCursor(QCursor(Qt::PointingHandCursor));
        b_pifu->setStyleSheet(QLatin1String("QPushButton{\n"
"	/* Font & Text */\n"
"	font-family: \"Helvetica Neue\", Helvetica, Arial, \"Microsoft Yahei\", \"Hiragino Sans GB\", \"Heiti SC\", \"WenQuanYi Micro Hei\", sans-serif;\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: normal;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgb(0, 167, 222);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(3, 129, 170);\n"
"	border-top: 1px solid rgb(3, 129, 170);\n"
"	border-right: 1px solid rgb(3, 129, 170);\n"
"	border-bottom: 1px solid rgb(3, 129, 170);\n"
""
                        "	border-left: 1px solid rgb(3, 129, 170);\n"
"	margin: 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(255, 255, 255) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
"	word-wrap: normal;\n"
"	b"
                        "ox-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"\n"
"	background-color: rgb(0, 190, 231);\n"
"\n"
"}"));

        verticalLayout_2->addWidget(b_pifu);

        stackedWidget->addWidget(Page1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        b_Return1 = new QPushButton(page_3);
        b_Return1->setObjectName(QStringLiteral("b_Return1"));
        b_Return1->setGeometry(QRect(0, 480, 186, 38));
        b_Return1->setMinimumSize(QSize(186, 38));
        b_Return1->setMaximumSize(QSize(40, 38));
        b_Return1->setCursor(QCursor(Qt::PointingHandCursor));
        b_Return1->setStyleSheet(QLatin1String("QPushButton{\n"
"	/* Font & Text */\n"
"	font-family: -apple-system, BlinkMacSystemFont, \"Segoe UI\", Helvetica, Arial, sans-serif, \"Apple Color Emoji\", \"Segoe UI Emoji\", \"Segoe UI Symbol\";\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: 600;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgb(248, 249, 251);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(215,56,58);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(27, 31, 35, 0.5);\n"
"	border-top: 1px solid rgb(27, 31, 35, 0.5);\n"
"	border-right: 1px solid rgb(27, 31, 35, 0.5);\n"
"	border-bottom: 1px solid "
                        "rgb(27, 31, 35, 0.5);\n"
"	border-left: 1px solid rgb(27, 31, 35, 0.5);\n"
"	margin: 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(255, 255, 255) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
""
                        "	word-wrap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"\n"
"	background-color: rgb(215, 56, 58);\n"
"    color: rgb(248, 249, 251);\n"
"\n"
"}\n"
""));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        b_Return2 = new QPushButton(page_4);
        b_Return2->setObjectName(QStringLiteral("b_Return2"));
        b_Return2->setGeometry(QRect(0, 480, 186, 38));
        b_Return2->setMinimumSize(QSize(186, 38));
        b_Return2->setMaximumSize(QSize(40, 38));
        b_Return2->setCursor(QCursor(Qt::PointingHandCursor));
        b_Return2->setStyleSheet(QLatin1String("QPushButton{\n"
"	/* Font & Text */\n"
"	font-family: -apple-system, BlinkMacSystemFont, \"Segoe UI\", Helvetica, Arial, sans-serif, \"Apple Color Emoji\", \"Segoe UI Emoji\", \"Segoe UI Symbol\";\n"
"	font-size: 14px;\n"
"	font-style: normal;\n"
"	font-variant: normal;\n"
"	font-weight: 600;\n"
"	letter-spacing: normal;\n"
"	line-height: 38px;\n"
"	text-decoration: none solid rgb(255, 255, 255);\n"
"	text-align: center;\n"
"	text-indent: 0px;\n"
"	text-transform: none;\n"
"	vertical-align: baseline;\n"
"	white-space: normal;\n"
"	word-spacing: 0px;\n"
"\n"
"	/* Color & Background */\n"
"	background-attachment: scroll;\n"
"	background-color: rgb(248, 249, 251);\n"
"	background-image: none;\n"
"	background-position: 0% 0%;\n"
"	background-repeat: repeat;\n"
"	color: rgb(215,56,58);\n"
"\n"
"	/* Box */\n"
"	height: 36px;\n"
"	width: 184px;\n"
"	border: 1px solid rgb(27, 31, 35, 0.5);\n"
"	border-top: 1px solid rgb(27, 31, 35, 0.5);\n"
"	border-right: 1px solid rgb(27, 31, 35, 0.5);\n"
"	border-bottom: 1px solid "
                        "rgb(27, 31, 35, 0.5);\n"
"	border-left: 1px solid rgb(27, 31, 35, 0.5);\n"
"	margin: 0px;\n"
"	padding: 0px;\n"
"	max-height: none;\n"
"	min-height: 0px;\n"
"	max-width: none;\n"
"	min-width: 0px;\n"
"\n"
"	/* Positioning */\n"
"	position: static;\n"
"	top: auto;\n"
"	bottom: auto;\n"
"	right: auto;\n"
"	left: auto;\n"
"	float: none;\n"
"	display: inline-block;\n"
"	clear: none;\n"
"	z-index: auto;\n"
"\n"
"	/* List */\n"
"	list-style-image: none;\n"
"	list-style-type: none;\n"
"	list-style-position: outside;\n"
"\n"
"	/* Table */\n"
"	border-collapse: separate;\n"
"	border-spacing: 0px 0px;\n"
"	caption-side: top;\n"
"	empty-cells: show;\n"
"	table-layout: auto;\n"
"\n"
"	/* Miscellaneous */\n"
"	overflow: visible;\n"
"	cursor: pointer;\n"
"	visibility: visible;\n"
"\n"
"	/* Effects */\n"
"	transform: none;\n"
"	transition: all 0.3s ease 0s;\n"
"	outline: rgb(255, 255, 255) dashed 0px;\n"
"	outline-offset: 0px;\n"
"	box-sizing: content-box;\n"
"	resize: none;\n"
"	text-shadow: none;\n"
"	text-overflow: clip;\n"
""
                        "	word-wrap: normal;\n"
"	box-shadow: none;\n"
"	border-top-left-radius: 2px;\n"
"	border-top-right-radius: 2px;\n"
"	border-bottom-left-radius: 2px;\n"
"	border-bottom-right-radius: 2px;\n"
"}\n"
"QPushButton:hover {\n"
"\n"
"	background-color: rgb(215, 56, 58);\n"
"    color: rgb(248, 249, 251);\n"
"\n"
"}\n"
""));
        stackedWidget->addWidget(page_4);

        horizontalLayout_2->addWidget(stackedWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_min = new QPushButton(MainGui);
        b_min->setObjectName(QStringLiteral("b_min"));
        b_min->setMinimumSize(QSize(34, 25));
        b_min->setMaximumSize(QSize(34, 25));
        b_min->setCursor(QCursor(Qt::PointingHandCursor));
        b_min->setStyleSheet(QLatin1String("QPushButton{\n"
"border:0px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(227, 227, 227);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_min->setIcon(icon);
        b_min->setIconSize(QSize(13, 13));

        horizontalLayout->addWidget(b_min);

        b_close = new QPushButton(MainGui);
        b_close->setObjectName(QStringLiteral("b_close"));
        b_close->setMinimumSize(QSize(34, 25));
        b_close->setMaximumSize(QSize(34, 25));
        b_close->setCursor(QCursor(Qt::PointingHandCursor));
        b_close->setStyleSheet(QLatin1String("QPushButton{\n"
"border:0px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(244, 84, 84);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_close->setIcon(icon1);
        b_close->setIconSize(QSize(13, 13));

        horizontalLayout->addWidget(b_close);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget1 = new QStackedWidget(MainGui);
        stackedWidget1->setObjectName(QStringLiteral("stackedWidget1"));
        stackedWidget1->setMaximumSize(QSize(1677215, 16777215));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        webEngineView = new QWebEngineView(page);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        webEngineView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout_3->addWidget(webEngineView);

        stackedWidget1->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget1->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget1);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(MainGui);
        QObject::connect(b_min, SIGNAL(clicked()), MainGui, SLOT(showMinimized()));
        QObject::connect(b_close, SIGNAL(clicked()), MainGui, SLOT(close()));

        stackedWidget->setCurrentIndex(0);
        pushButton_3->setDefault(false);
        stackedWidget1->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainGui);
    } // setupUi

    void retranslateUi(QDialog *MainGui)
    {
        MainGui->setWindowTitle(QApplication::translate("MainGui", "MainGui", 0));
        b_pritruce->setText(QString());
        pushButton_3->setText(QApplication::translate("MainGui", "\346\220\234\347\264\242", 0));
        pushButton_5->setText(QApplication::translate("MainGui", "\350\247\206\351\242\221", 0));
        pushButton_4->setText(QApplication::translate("MainGui", "\345\233\276\347\211\207", 0));
        b_setting->setText(QApplication::translate("MainGui", "\350\256\276\347\275\256", 0));
        b_pifu->setText(QApplication::translate("MainGui", "\344\270\213\350\275\275", 0));
        b_Return1->setText(QApplication::translate("MainGui", "\350\277\224\345\233\236", 0));
        b_Return2->setText(QApplication::translate("MainGui", "\350\277\224\345\233\236", 0));
        b_min->setText(QString());
        b_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainGui: public Ui_MainGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINGUI_H
