/********************************************************************************
** Form generated from reading UI file 'qsseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSSEDITOR_H
#define UI_QSSEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Qsci/qsciscintilla.h"

QT_BEGIN_NAMESPACE

class Ui_QssEditor
{
public:
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolOpen;
    QToolButton *toolSave;
    QToolButton *toolSaveAs;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *toolClose;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolUndo;
    QToolButton *toolRedo;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolOptions;
    QToolButton *toolAbout;
    QToolButton *toolAboutQt;
    QsciScintilla *text;
    QWidget *widgetAllWidgets;
    QGridLayout *gridLayout;
    QLabel *labelPreview;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxReadOnly;
    QComboBox *comboBoxEditable;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QCommandLinkButton *commandLinkButton;
    QGridLayout *gridLayout_5;
    QFrame *line_2;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QFrame *line;
    QDial *dial;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QListWidget *listWidgetIcons;
    QTableWidget *table;
    QTreeWidget *tree;
    QWidget *tab_3;
    QGridLayout *gridLayout_8;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QCalendarWidget *calendarWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_9;
    QFrame *frame;
    QGridLayout *gridLayout_10;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_3;
    QMdiArea *mdiArea;

    void setupUi(QWidget *QssEditor)
    {
        if (QssEditor->objectName().isEmpty())
            QssEditor->setObjectName(QStringLiteral("QssEditor"));
        QssEditor->resize(915, 520);
        gridLayout_4 = new QGridLayout(QssEditor);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        splitter = new QSplitter(QssEditor);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolOpen = new QToolButton(layoutWidget);
        toolOpen->setObjectName(QStringLiteral("toolOpen"));

        horizontalLayout->addWidget(toolOpen);

        toolSave = new QToolButton(layoutWidget);
        toolSave->setObjectName(QStringLiteral("toolSave"));
        toolSave->setEnabled(false);

        horizontalLayout->addWidget(toolSave);

        toolSaveAs = new QToolButton(layoutWidget);
        toolSaveAs->setObjectName(QStringLiteral("toolSaveAs"));

        horizontalLayout->addWidget(toolSaveAs);

        horizontalSpacer_4 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        toolClose = new QToolButton(layoutWidget);
        toolClose->setObjectName(QStringLiteral("toolClose"));
        toolClose->setEnabled(false);

        horizontalLayout->addWidget(toolClose);

        horizontalSpacer = new QSpacerItem(0, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolUndo = new QToolButton(layoutWidget);
        toolUndo->setObjectName(QStringLiteral("toolUndo"));

        horizontalLayout->addWidget(toolUndo);

        toolRedo = new QToolButton(layoutWidget);
        toolRedo->setObjectName(QStringLiteral("toolRedo"));

        horizontalLayout->addWidget(toolRedo);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        toolOptions = new QToolButton(layoutWidget);
        toolOptions->setObjectName(QStringLiteral("toolOptions"));

        horizontalLayout->addWidget(toolOptions);

        toolAbout = new QToolButton(layoutWidget);
        toolAbout->setObjectName(QStringLiteral("toolAbout"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/qsseditor.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolAbout->setIcon(icon);

        horizontalLayout->addWidget(toolAbout);

        toolAboutQt = new QToolButton(layoutWidget);
        toolAboutQt->setObjectName(QStringLiteral("toolAboutQt"));

        horizontalLayout->addWidget(toolAboutQt);


        verticalLayout->addLayout(horizontalLayout);

        text = new QsciScintilla(layoutWidget);
        text->setObjectName(QStringLiteral("text"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(text);

        splitter->addWidget(layoutWidget);
        widgetAllWidgets = new QWidget(splitter);
        widgetAllWidgets->setObjectName(QStringLiteral("widgetAllWidgets"));
        gridLayout = new QGridLayout(widgetAllWidgets);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelPreview = new QLabel(widgetAllWidgets);
        labelPreview->setObjectName(QStringLiteral("labelPreview"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        labelPreview->setFont(font);
        labelPreview->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelPreview, 0, 0, 1, 1);

        tabWidget = new QTabWidget(widgetAllWidgets);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        gridLayout_7 = new QGridLayout(tab_1);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        radioButton = new QRadioButton(tab_1);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setText(QStringLiteral("RadioButton"));

        gridLayout_6->addWidget(radioButton, 0, 0, 1, 1);

        checkBox = new QCheckBox(tab_1);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setText(QStringLiteral("CheckBox"));
        checkBox->setTristate(true);

        gridLayout_6->addWidget(checkBox, 0, 1, 1, 1);

        progressBar = new QProgressBar(tab_1);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximum(20);
        progressBar->setValue(0);

        gridLayout_6->addWidget(progressBar, 0, 2, 1, 1);

        pushButton = new QPushButton(tab_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setText(QStringLiteral("PushButton"));
        pushButton->setCheckable(true);

        gridLayout_6->addWidget(pushButton, 1, 0, 1, 1);

        toolButton = new QToolButton(tab_1);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setText(QStringLiteral("ToolButton"));
        toolButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout_6->addWidget(toolButton, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBoxReadOnly = new QComboBox(tab_1);
        comboBoxReadOnly->insertItems(0, QStringList()
         << QStringLiteral("1")
         << QStringLiteral("2")
         << QStringLiteral("3")
        );
        comboBoxReadOnly->setObjectName(QStringLiteral("comboBoxReadOnly"));
        sizePolicy1.setHeightForWidth(comboBoxReadOnly->sizePolicy().hasHeightForWidth());
        comboBoxReadOnly->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBoxReadOnly);

        comboBoxEditable = new QComboBox(tab_1);
        comboBoxEditable->insertItems(0, QStringList()
         << QStringLiteral("1")
         << QStringLiteral("2")
         << QStringLiteral("3")
        );
        comboBoxEditable->setObjectName(QStringLiteral("comboBoxEditable"));
        sizePolicy1.setHeightForWidth(comboBoxEditable->sizePolicy().hasHeightForWidth());
        comboBoxEditable->setSizePolicy(sizePolicy1);
        comboBoxEditable->setEditable(true);

        horizontalLayout_3->addWidget(comboBoxEditable);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 2, 1, 1);

        spinBox = new QSpinBox(tab_1);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout_6->addWidget(spinBox, 2, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(tab_1);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        gridLayout_6->addWidget(doubleSpinBox, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(tab_1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setText(QStringLiteral("Line edit"));

        horizontalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(tab_1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setText(QStringLiteral("Password"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout_6->addLayout(horizontalLayout_2, 2, 2, 1, 1);

        timeEdit = new QTimeEdit(tab_1);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout_6->addWidget(timeEdit, 3, 0, 1, 1);

        dateEdit = new QDateEdit(tab_1);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout_6->addWidget(dateEdit, 3, 1, 1, 1);

        dateTimeEdit = new QDateTimeEdit(tab_1);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        gridLayout_6->addWidget(dateTimeEdit, 3, 2, 1, 1);

        lcdNumber = new QLCDNumber(tab_1);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setDigitCount(10);
        lcdNumber->setProperty("intValue", QVariant(1234567890));

        gridLayout_6->addWidget(lcdNumber, 4, 0, 1, 1);

        label = new QLabel(tab_1);
        label->setObjectName(QStringLiteral("label"));
        label->setText(QStringLiteral("Label with <a href=\"http://google.com\">link</a>"));

        gridLayout_6->addWidget(label, 4, 1, 1, 1);

        commandLinkButton = new QCommandLinkButton(tab_1);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setText(QStringLiteral("CommandLinkButton"));

        gridLayout_6->addWidget(commandLinkButton, 4, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        line_2 = new QFrame(tab_1);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 0, 0, 3, 1);

        verticalSlider = new QSlider(tab_1);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setValue(30);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout_5->addWidget(verticalSlider, 0, 1, 3, 1);

        horizontalSlider = new QSlider(tab_1);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy2);
        horizontalSlider->setValue(30);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_5->addWidget(horizontalSlider, 0, 2, 1, 1);

        line = new QFrame(tab_1);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 2, 1, 1);

        dial = new QDial(tab_1);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setNotchesVisible(true);

        gridLayout_5->addWidget(dial, 2, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 3, 0, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QStringLiteral("Tab 1"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(tab_2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/battery.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setText(QStringLiteral("I1"));
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/image-sunset.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setText(QStringLiteral("I2"));
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setText(QStringLiteral("I3"));
        __qlistwidgetitem2->setIcon(icon3);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setText(QStringLiteral("I4"));
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setText(QStringLiteral("I5"));
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setText(QStringLiteral("I6"));
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setText(QStringLiteral("I7"));
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setText(QStringLiteral("I8"));
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget);
        __qlistwidgetitem8->setText(QStringLiteral("I9"));
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(listWidget);
        __qlistwidgetitem9->setText(QStringLiteral("I10"));
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(listWidget);
        __qlistwidgetitem10->setText(QStringLiteral("I11"));
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(listWidget);
        __qlistwidgetitem11->setText(QStringLiteral("I12"));
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(listWidget);
        __qlistwidgetitem12->setText(QStringLiteral("I14"));
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(listWidget);
        __qlistwidgetitem13->setText(QStringLiteral("I15"));
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(listWidget);
        __qlistwidgetitem14->setText(QStringLiteral("I16"));
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(listWidget);
        __qlistwidgetitem15->setText(QStringLiteral("I17"));
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(listWidget);
        __qlistwidgetitem16->setText(QStringLiteral("I18"));
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(listWidget);
        __qlistwidgetitem17->setText(QStringLiteral("I19"));
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(listWidget);
        __qlistwidgetitem18->setText(QStringLiteral("I20"));
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        listWidgetIcons = new QListWidget(tab_2);
        QListWidgetItem *__qlistwidgetitem19 = new QListWidgetItem(listWidgetIcons);
        __qlistwidgetitem19->setText(QStringLiteral("I1"));
        __qlistwidgetitem19->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem20 = new QListWidgetItem(listWidgetIcons);
        __qlistwidgetitem20->setText(QStringLiteral("I2"));
        __qlistwidgetitem20->setIcon(icon2);
        QListWidgetItem *__qlistwidgetitem21 = new QListWidgetItem(listWidgetIcons);
        __qlistwidgetitem21->setText(QStringLiteral("I3"));
        __qlistwidgetitem21->setIcon(icon3);
        listWidgetIcons->setObjectName(QStringLiteral("listWidgetIcons"));
        listWidgetIcons->setFlow(QListView::LeftToRight);
        listWidgetIcons->setViewMode(QListView::IconMode);

        gridLayout_2->addWidget(listWidgetIcons, 0, 1, 1, 1);

        table = new QTableWidget(tab_2);
        if (table->columnCount() < 2)
            table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QStringLiteral("C1"));
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QStringLiteral("C2"));
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (table->rowCount() < 3)
            table->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setText(QStringLiteral("R1"));
        table->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setText(QStringLiteral("R2"));
        table->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setText(QStringLiteral("R3"));
        table->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setText(QStringLiteral("1,1"));
        table->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setText(QStringLiteral("1,2"));
        table->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setText(QStringLiteral("2,1"));
        table->setItem(1, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setText(QStringLiteral("2,2"));
        table->setItem(1, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setText(QStringLiteral("3,1"));
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        table->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setText(QStringLiteral("2,3"));
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        table->setItem(2, 1, __qtablewidgetitem10);
        table->setObjectName(QStringLiteral("table"));
        table->setSortingEnabled(true);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_2->addWidget(table, 1, 0, 1, 1);

        tree = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QStringLiteral("C2"));
        __qtreewidgetitem->setText(0, QStringLiteral("C1"));
        tree->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(tree);
        __qtreewidgetitem1->setText(0, QStringLiteral("R1"));
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setText(1, QStringLiteral("X1"));
        __qtreewidgetitem2->setCheckState(1, Qt::Checked);
        __qtreewidgetitem2->setText(0, QStringLiteral("C1"));
        __qtreewidgetitem2->setCheckState(0, Qt::Checked);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setText(1, QStringLiteral("X2"));
        __qtreewidgetitem3->setCheckState(1, Qt::PartiallyChecked);
        __qtreewidgetitem3->setText(0, QStringLiteral("C2"));
        __qtreewidgetitem3->setCheckState(0, Qt::PartiallyChecked);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        __qtreewidgetitem4->setText(1, QStringLiteral("X3"));
        __qtreewidgetitem4->setText(0, QStringLiteral("C3"));
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(tree);
        __qtreewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        __qtreewidgetitem5->setText(0, QStringLiteral("R2"));
        tree->setObjectName(QStringLiteral("tree"));
        tree->setAllColumnsShowFocus(true);
        tree->header()->setProperty("showSortIndicator", QVariant(true));

        gridLayout_2->addWidget(tree, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QStringLiteral("Tab 2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_8 = new QGridLayout(tab_3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setUndoRedoEnabled(true);
        textBrowser->setHtml(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Text </span><span style=\" font-size:8pt; font-weight:600;\">browser</span><span style=\" font-size:8pt;\"> </span><span style=\" font-size:8pt; font-style:italic;\">with</span><span style=\" font-size:8pt;\"> </span><span style=\" font-size:8pt; text-decoration: underline;\">some</span><span style=\" font-size:8pt;\"> </span><span style=\" font-size:8pt; font-weight:600; font-style:italic;\">text </span><span style=\" font-size:8pt;\">and </span><a href=\"http://google.com\"><span style=\" font-size:8pt; text-decoration: u"
                        "nderline; color:#0000ff;\">links</span></a></p></body></html>"));
        textBrowser->setOpenLinks(false);

        gridLayout_8->addWidget(textBrowser, 0, 0, 1, 1);

        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setHtml(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Text edit</span></p></body></html>"));

        gridLayout_8->addWidget(textEdit, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(tab_3);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        gridLayout_8->addWidget(calendarWidget, 0, 2, 1, 1);

        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setTitle(QStringLiteral("GroupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 535, 169));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setText(QStringLiteral("Frame"));

        gridLayout_10->addWidget(label_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_9->addWidget(frame, 0, 1, 1, 1);

        toolBox = new QToolBox(scrollAreaWidgetContents);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 85, 85));
        toolBox->addItem(page, QStringLiteral("Toolbox1"));
        toolBox->setItemText(toolBox->indexOf(page), QStringLiteral("Toolbox1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 98, 28));
        toolBox->addItem(page_2, QStringLiteral("Toolbox2"));
        toolBox->setItemText(toolBox->indexOf(page_2), QStringLiteral("Toolbox2"));

        gridLayout_9->addWidget(toolBox, 0, 0, 2, 1);

        dockWidget = new QDockWidget(scrollAreaWidgetContents);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy4);
        dockWidget->setWindowTitle(QStringLiteral("Dock widget"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        dockWidget->setWidget(dockWidgetContents_3);

        gridLayout_9->addWidget(dockWidget, 0, 2, 1, 1);

        mdiArea = new QMdiArea(scrollAreaWidgetContents);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(2);
        sizePolicy5.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy5);

        gridLayout_9->addWidget(mdiArea, 1, 1, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox, 1, 0, 1, 3);

        tabWidget->addTab(tab_3, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QStringLiteral("Tab 3"));

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        splitter->addWidget(widgetAllWidgets);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        QWidget::setTabOrder(toolOpen, toolSave);
        QWidget::setTabOrder(toolSave, toolSaveAs);
        QWidget::setTabOrder(toolSaveAs, toolClose);
        QWidget::setTabOrder(toolClose, toolUndo);
        QWidget::setTabOrder(toolUndo, toolRedo);
        QWidget::setTabOrder(toolRedo, toolOptions);
        QWidget::setTabOrder(toolOptions, toolAbout);
        QWidget::setTabOrder(toolAbout, toolAboutQt);
        QWidget::setTabOrder(toolAboutQt, tabWidget);
        QWidget::setTabOrder(tabWidget, radioButton);
        QWidget::setTabOrder(radioButton, checkBox);
        QWidget::setTabOrder(checkBox, pushButton);
        QWidget::setTabOrder(pushButton, toolButton);
        QWidget::setTabOrder(toolButton, comboBoxReadOnly);
        QWidget::setTabOrder(comboBoxReadOnly, comboBoxEditable);
        QWidget::setTabOrder(comboBoxEditable, spinBox);
        QWidget::setTabOrder(spinBox, doubleSpinBox);
        QWidget::setTabOrder(doubleSpinBox, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, timeEdit);
        QWidget::setTabOrder(timeEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, verticalSlider);
        QWidget::setTabOrder(verticalSlider, horizontalSlider);
        QWidget::setTabOrder(horizontalSlider, dial);
        QWidget::setTabOrder(dial, commandLinkButton);
        QWidget::setTabOrder(commandLinkButton, listWidget);
        QWidget::setTabOrder(listWidget, listWidgetIcons);
        QWidget::setTabOrder(listWidgetIcons, table);
        QWidget::setTabOrder(table, tree);
        QWidget::setTabOrder(tree, textBrowser);
        QWidget::setTabOrder(textBrowser, textEdit);
        QWidget::setTabOrder(textEdit, calendarWidget);
        QWidget::setTabOrder(calendarWidget, scrollArea);

        retranslateUi(QssEditor);
        QObject::connect(text, SIGNAL(textChanged()), QssEditor, SLOT(slotCssChanged()));
        QObject::connect(toolOpen, SIGNAL(clicked()), QssEditor, SLOT(slotOpen()));
        QObject::connect(toolSave, SIGNAL(clicked()), QssEditor, SLOT(slotSave()));
        QObject::connect(toolSaveAs, SIGNAL(clicked()), QssEditor, SLOT(slotSaveAs()));
        QObject::connect(toolOptions, SIGNAL(clicked()), QssEditor, SLOT(slotOptions()));
        QObject::connect(toolUndo, SIGNAL(clicked()), text, SLOT(undo()));
        QObject::connect(toolRedo, SIGNAL(clicked()), text, SLOT(redo()));
        QObject::connect(toolClose, SIGNAL(clicked()), QssEditor, SLOT(slotClose()));
        QObject::connect(toolAbout, SIGNAL(clicked()), QssEditor, SLOT(slotAbout()));
        QObject::connect(toolAboutQt, SIGNAL(clicked()), QssEditor, SLOT(slotAboutQt()));

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QssEditor);
    } // setupUi

    void retranslateUi(QWidget *QssEditor)
    {
#ifndef QT_NO_TOOLTIP
        toolOpen->setToolTip(QApplication::translate("QssEditor", "Open style", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolSave->setToolTip(QApplication::translate("QssEditor", "Save style", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolSaveAs->setToolTip(QApplication::translate("QssEditor", "Save style as", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolClose->setToolTip(QApplication::translate("QssEditor", "Close", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolUndo->setToolTip(QApplication::translate("QssEditor", "Undo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolRedo->setToolTip(QApplication::translate("QssEditor", "Redo", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolOptions->setToolTip(QApplication::translate("QssEditor", "Options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolAbout->setToolTip(QApplication::translate("QssEditor", "About", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolAboutQt->setToolTip(QApplication::translate("QssEditor", "About Qt", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPreview->setText(QApplication::translate("QssEditor", "Preview style", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidgetIcons->isSortingEnabled();
        listWidgetIcons->setSortingEnabled(false);
        listWidgetIcons->setSortingEnabled(__sortingEnabled1);


        const bool __sortingEnabled2 = table->isSortingEnabled();
        table->setSortingEnabled(false);
        table->setSortingEnabled(__sortingEnabled2);


        const bool __sortingEnabled3 = tree->isSortingEnabled();
        tree->setSortingEnabled(false);
        tree->setSortingEnabled(__sortingEnabled3);

        Q_UNUSED(QssEditor);
    } // retranslateUi

};

namespace Ui {
    class QssEditor: public Ui_QssEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSSEDITOR_H
