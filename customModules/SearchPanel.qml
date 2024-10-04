import QtQuick

Rectangle 
{
  id: root;

  property bool hidden: true;

  color: "#333333";

  ListView 
  {
    id: listView

    anchors.fill: parent;
    anchors.margins: 20;

    spacing: 10;
    clip: true;
    model: audioSearchModel;
    visible: !audioSearchModel.isSearching;

    delegate: Rectangle 
    {

      id: delegate;

      required property string audioName;
      required property string audioAuthor;
      required property url audioImageSource;
      required property url audioSource;
      required property int index;

      width: listView.width;
      height: 50;

      color: "#1e1e1e";

      Image 
      {
        id: audioImage;

        anchors.left: parent.left;
        anchors.leftMargin: 5;
        anchors.verticalCenter: parent.verticalCenter;

        width: 32;
        height: 32;

        source: delegate.audioImageSource;
      }

      Column 
      {
        anchors.left: audioImage.right;
        anchors.right: parent.right;
        anchors.top: parent.top;
        anchors.margins: 5;

        spacing: 5;

        Text 
        {
          width: parent.width;

          text: delegate.audioName;
          color: "white";

          minimumPixelSize: 12;
          fontSizeMode: Text.Fit;
          elide: Text.ElideRight;

          font.pixelSize: 16;
          font.bold: true;
        }

        Text 
        {
          width: parent.width;

          text: delegate.audioAuthor;
          color: "gray";

          fontSizeMode: Text.Fit;
          minimumPixelSize: 8;
          elide: Text.ElideRight;

          font.pixelSize: 12;
        }
      }

      MouseArea 
      {
        anchors.fill: parent;

        onClicked: 
        {
          root.hidden = true;
          playerController.addAudio(delegate.audioName, delegate.audioAuthor, delegate.audioSource, delegate.audioImageSource);
        }
      }
    }
  }

  Text 
  {
    anchors.centerIn: parent;

    color: "gray";
    visible: audioSearchModel.isSearching || listView.count === 0;
    
    text: if (audioSearchModel.isSearching) 
            return "Searching...";
           else if (listView.count === 0) 
            return "No results";
           else 
            return "";

    font.pixelSize: 24;
    font.bold: true;
  }

  Behavior on y 
  {
    PropertyAnimation 
    {
      easing.type: Easing.InOutQuad;
      duration: 200;
    }
  }
}