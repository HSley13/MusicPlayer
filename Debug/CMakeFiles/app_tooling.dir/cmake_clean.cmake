file(REMOVE_RECURSE
  "MusicPlayer/customModules/AudioInfoBox.qml"
  "MusicPlayer/customModules/ImageButton.qml"
  "MusicPlayer/customModules/Main.qml"
  "MusicPlayer/customModules/PlayListPanel.qml"
  "MusicPlayer/customModules/SearchField.qml"
  "MusicPlayer/customModules/SearchPanel.qml"
  "MusicPlayer/images/add_icon.png"
  "MusicPlayer/images/close_icon.png"
  "MusicPlayer/images/menu_icon.png"
  "MusicPlayer/images/next_icon.png"
  "MusicPlayer/images/pause_icon.png"
  "MusicPlayer/images/play_icon.png"
  "MusicPlayer/images/previous_icon.png"
  "MusicPlayer/images/search_icon.png"
  "MusicPlayer/images/trash_icon.png"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/app_tooling.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
