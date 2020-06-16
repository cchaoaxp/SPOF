pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('Qt-Build') {
      steps {
        sh './buildScript.sh'
      }
    }

    stage('QtUnitTest') {
      steps {
        sh '''echo "pwd is $0"
cd ..'''
      }
    }

  }
}