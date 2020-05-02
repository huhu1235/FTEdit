#pragma once
#include <QtWidgets>
#include "FTEdit_Editor.hh"

class LineEditName : public QLineEdit
{
private:
	Editor &editor;
	bool isValid;

public:
	LineEditName(QWidget *parent, Editor &editor);

	// Checks if name is valid compared to the old one
	// This method should be called with signal editingFinished() in your own method
	// Returns a valid QString in any case
	QString check(Properties &prop);
	// Returns true if name is valid
	bool valid() const;
};