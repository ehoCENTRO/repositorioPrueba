#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);
	ofDrawRectangle(0, 0, 100, 100);

	eduardo();
	mariano();
	lorenza();
}

void ofApp::eduardo() {
	ofSetColor(255, 0, 0);
	ofFill();
	ofDrawBitmapString("HOLA MUNDO", 300, 200);
}

void ofApp::mariano() {
	ofSetColor(0, 180, 180);
	ofFill();
	ofDrawBitmapString("Aight", 300, 400);
}

void ofApp::lorenza() {
	ofSetColor(0, 200, 400);
	ofFill();
	ofDrawBitmapString("BYE MUNDO", 300, 500);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
